# SUBSYSTEM 001
# Geometry Foundation

## Library

```text
code_l_geometry
```

## Third Party Dependencies

```text
Eigen
```

## Responsibilities

Provide all mathematical primitives used by the system.

## Public Domain Objects

```text
Point2
Point3

Vector2
Vector3

Matrix3
Matrix4

Transform3

Ray3

Plane

BoundingBox
```

## Public Interfaces

```text
IRayIntersectionService

ITransformService

ICoordinateFrameService
```

## Forbidden Dependencies

```text
Qt
OpenGL
Optics
```

## Success Criteria

All optical computation can be expressed using only geometry types.

---

# SUBSYSTEM 002
# Materials

## Library

```text
code_l_materials
```

## Dependencies

```text
code_l_geometry
```

## Responsibilities

Catalogs and refractive-index models.

## Public Domain Objects

```text
MaterialId

Material

Glass

Coating

Catalog
```

## Public Interfaces

```text
IMaterialCatalog

IMaterialLookup

IDispersionModel
```

## Future Features

```text
Sellmeier
Schott
Private catalogs
Coating models
```

---

# SUBSYSTEM 003
# Optical Model

## Library

```text
code_l_optics
```

## Responsibilities

Authoritative representation of an optical system.

## Public Domain Objects

```text
OpticalSystem

Surface

Aperture

Stop

Field

Spectrum

Configuration

LensAssembly
```

## Public Interfaces

```text
IOpticalSystem

IOpticalSystemBuilder

IValidationService
```

## Notes

No ray tracing allowed.

No optimization allowed.

Pure model only.

---

# SUBSYSTEM 004
# Sequential Ray Tracing

## Library

```text
code_l_raytrace
```

## Dependencies

```text
geometry
materials
optics
```

## Responsibilities

Ray propagation.

## Public Domain Objects

```text
RayBundle

TraceRequest

TraceResult

ChiefRay

MarginalRay
```

## Public Interfaces

```text
IRayTracer

IRayFanTracer

IChiefRayTracer

IPupilTracer
```

## Notes

This is the computational heart of the product.

No Qt permitted.

---

# SUBSYSTEM 005
# Aberration Analysis

## Library

```text
code_l_aberration
```

## Responsibilities

Classical optical analysis.

## Public Interfaces

```text
ISeidelAnalysis

IThirdOrderAnalysis

IFifthOrderAnalysis

IRayAberrationAnalysis

IOpdAnalysis
```

## Outputs

```text
RayFans

OPD Curves

Seidel Terms

Zernike Coefficients
```

---

# SUBSYSTEM 006
# Diffraction Analysis

## Library

```text
code_l_diffraction
```

## Responsibilities

Wave-optics calculations.

## Public Interfaces

```text
IMtfAnalysis

IPsfAnalysis

IWavefrontAnalysis

IStrehlAnalysis
```

## Outputs

```text
MTF

PSF

Wavefront

Encircled Energy
```

---

# SUBSYSTEM 007
# Optimization

## Library

```text
code_l_optimization
```

## Dependencies

```text
Eigen
```

## Responsibilities

Lens optimization.

## Public Interfaces

```text
IOptimizer

IConstraintSolver

IVariableManager

IMeritFunction
```

## Algorithms

```text
Damped Least Squares

Global Search

Glass Substitution
```

---

# SUBSYSTEM 008
# Persistence

## Library

```text
code_l_persistence
```

## Dependencies

```text
nlohmann-json
```

## Responsibilities

Save and load systems.

## Public Interfaces

```text
ILensReader

ILensWriter

IProjectSerializer
```

## Formats

```text
.len
.seq
.json
```

---

# SUBSYSTEM 009
# Scripting

## Library

```text
code_l_scripting
```

## Responsibilities

CODE_L command language.

## Public Interfaces

```text
ICommandParser

ICommandExecutor

IMacroExecutor
```

## Example

```text
WL 656 587 486
EPD 20
YAN 0 5
```

---

# SUBSYSTEM 010
# Visualization

## Library

```text
code_l_visualization
```

## Responsibilities

Convert domain objects into renderable objects.

## Public Interfaces

```text
ILensVisualizationBuilder

IRayVisualizationBuilder

IPlotBuilder
```

## Outputs

```text
Polyline Sets

Meshes

Plot Primitives

Annotations
```

## Notes

No OpenGL permitted.

---

# SUBSYSTEM 011
# Rendering

## Library

```text
code_l_render
```

## Dependencies

```text
Qt
OpenGL
```

## Responsibilities

GPU rendering.

## Public Interfaces

```text
IRenderSystem

ICamera

IViewport
```

## Notes

Only subsystem permitted to issue OpenGL commands.

---

# SUBSYSTEM 012
# Application Layer

## Library

```text
code_l_application
```

## Responsibilities

Use case orchestration.

## Public Interfaces

```text
IProjectService

IAnalysisService

IOptimizationService

IDocumentService
```

---

# SUBSYSTEM 013
# User Interface

## Library

```text
code_l_ui
```

## Dependencies

```text
Qt
application
render
```

## Responsibilities

Presentation layer.

## Components

```text
MainWindow

LensDataEditor

CommandConsole

AnalysisPanels

ViewportWidget
```

## Notes

No optical calculations allowed.
No optimization code allowed.
No ray tracing code allowed.