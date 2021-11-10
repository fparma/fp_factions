@echo off
if not exist "%~dp0"\"/build" mkdir "%~dp0"\"/build"

for /d %%G in ("FP_Factions/*") do (
	echo.
	echo Building %%G...
	echo.
	makepbo -WP FP_Factions/%%G build/fp_factions_%%G || goto error
)

echo.
echo Build done, no errors
pause
goto :EOF

:error
echo Failed with error #%errorlevel%.
pause
