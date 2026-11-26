param(
    [string]$Preset = "x64-debug"
)

ctest `
    --test-dir out/build/$Preset `
    --output-on-failure