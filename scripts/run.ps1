param(
    [string]$Preset = "x64-debug"
)

$out = "out/build/$Preset"

if ($Preset -eq "x64-debug")
{
    $plugin =
    "vcpkg_installed/x64-windows/debug/Qt6/plugins/platforms/qwindowsd.dll"
}
else
{
    $plugin =
    "vcpkg_installed/x64-windows/Qt6/plugins/platforms/qwindows.dll"
}

New-Item `
    -ItemType Directory `
    -Force `
    "$out/platforms" | Out-Null

Copy-Item `
    $plugin `
    "$out/platforms" `
    -Force

& "$out/CODE_L.exe"