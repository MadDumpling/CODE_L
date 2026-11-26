# CODE_L Subsystem Specification

## Architectural Principles

The system shall be organized around domain boundaries rather than UI screens.

The optics domain must remain independent of:

- Qt
- OpenGL
- Persistence
- User Interface
- Rendering

The core optical engine shall be usable from:

- GUI applications
- Command line tools
- Automated tests
- Future scripting interfaces

---

# Subsystem: Geometry

## Responsibility

Provides mathematical and geometric primitives.

## Owns

- Point2
- Point3
- Vector2
- Vector3
- Matrix4
- Ray3
- Plane
- BoundingBox

## Public Services

```text
IRayIntersectionService
ITransformService
ICoordinateSystemService
```

## Dependencies

None.

## Notes

Geometry must not depend on optics.

---

# Subsystem: Materials

## Responsibility

Models optical materials and catalogs.

## Owns

- Material
- DispersionModel
- RefractiveIndexTable
- GlassCatalog

## Public Services

```text
IMaterialCatalog
IMaterialRepository
```

## Responsibilities

- Refractive index lookup
- Sellmeier evaluation
- Catalog management
- Glass substitution support

---

# Subsystem: Optical Model

## Responsibility

Defines the optical system data model.

## Owns

- OpticalSystem
- Surface
- LensElement
- StopSurface
- Wavelength
- FieldDefinition
- Aperture
- OpticalPath

## Public Services

```text
IOpticalSystemBuilder
IOpticalSystemValidator
```

## Dependencies

- Geometry
- Materials

## Notes

This subsystem contains no ray tracing.

It is pure system description.

---

# Subsystem: Ray Tracing

## Responsibility

Computes ray propagation.

## Owns

- SequentialRayTracer
- RayBundle
- RayTraceResult

## Public Services

```text
IRayTracer
IRayFanTracer
IChiefRayTracer
IMarginalRayTracer
```

## Dependencies

- Geometry
- Materials
- Optical Model

## Notes

All propagation algorithms belong here.

---

# Subsystem: Aberration Analysis

## Responsibility

Computes aberration metrics.

## Public Services

```text
IThirdOrderAnalysis
IFifthOrderAnalysis
IRayAberrationAnalysis
IOpdAnalysis
```

## Outputs

- Seidel coefficients
- Ray aberration curves
- OPD curves
- Wavefront data

## Dependencies

- Ray Tracing

---

# Subsystem: Diffraction Analysis

## Responsibility

Computes diffraction-based metrics.

## Public Services

```text
IMtfAnalysis
IPsfAnalysis
IWavefrontAnalysis
```

## Outputs

- MTF
- PSF
- Strehl ratio
- RMS wavefront error

## Dependencies

- Ray Tracing
- Aberration Analysis

---

# Subsystem: Optimization

## Responsibility

Optimizes optical systems.

## Public Services

```text
IOptimizer
IConstraintSet
IErrorFunction
IVariableManager
```

## Optimization Types

- Damped least squares
- Global optimization
- Glass substitution
- Multi-configuration optimization

## Dependencies

- Optical Model
- Ray Tracing
- Analysis

---

# Subsystem: Visualization

## Responsibility

Transforms domain data into renderable representations.

## Owns

- LensViewModel
- RayViewModel
- SpotDiagramModel
- MtfPlotModel

## Public Services

```text
ILensRenderer
IRayRenderer
IPlotRenderer
```

## Dependencies

- Domain Objects

## Notes

Must not contain OpenGL code.

Produces render data only.

---

# Subsystem: OpenGL Renderer

## Responsibility

GPU rendering.

## Owns

- ShaderManager
- MeshRepository
- Camera
- FrameGraph

## Public Services

```text
IRenderSystem
ICameraController
```

## Dependencies

- Visualization

## Notes

Only subsystem allowed to use OpenGL.

---

# Subsystem: Persistence

## Responsibility

File loading and saving.

## Formats

```text
.len
.seq
.json
.xml
```

## Public Services

```text
ILensSerializer
ILensDeserializer
```

## Dependencies

- Optical Model

---

# Subsystem: Scripting

## Responsibility

Command interpreter and automation.

## Owns

- ScriptEngine
- MacroRunner

## Public Services

```text
ICommandExecutor
IMacroExecutor
```

## Notes

Designed to support CODE_V style sequences.

Example:

```text
EPD 20
WL 656 587 486
YAN 0 3 5
```

---

# Subsystem: Application

## Responsibility

Use-case orchestration.

## Owns

- ApplicationServices
- DocumentServices
- AnalysisWorkflows

## Dependencies

All domain subsystems.

## Notes

Coordinates operations but performs no calculations.

---

# Subsystem: User Interface

## Responsibility

Qt presentation layer.

## Owns

- MainWindow
- LensDataEditor
- AnalysisDialogs
- ViewportWidget

## Dependencies

- Application Layer
- Visualization Layer

## Notes

Must not contain optical calculations.
Must not perform ray tracing.
Must not perform optimization.
Delegates all domain behavior to application services.