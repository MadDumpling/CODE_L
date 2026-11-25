@echo off

C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-dbg/bin/rcc.exe -v > nul 2>&1

if "%errorlevel%" == "-1073741515" (
echo
echo     'rcc' is built successfully, but some of the libraries
echo     necessary for running it are missing. If you are building Qt with
echo     3rdparty libraries, make sure that you add their directory to the
echo     PATH environment variable.
echo
exit /b %errorlevel%
)
echo. > C:/Users/djc/source/repos/CODE_L/vcpkg_installed/vcpkg/blds/qtbase/x64-windows-dbg/src/tools/rcc/rcc_try_run_passed