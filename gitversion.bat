@echo off

set OUTFILE=src/GitVersion.h
set TMPFILE=%OUTFILE%

git log -1 --pretty="%%h" > %TMPFILE%
set /p GIT_VERSION=<%TMPFILE%

git status -z > %TMPFILE%
set /p GIT_STATUS=<%TMPFILE%
if not "%GIT_STATUS%" == "" set GIT_VERSION=%GIT_VERSION%+

git tag --contains > %TMPFILE%
set /p GIT_TAG=<%TMPFILE%

git log -1 --pretty="%%cd" > %TMPFILE%
set /p GIT_DATE=<%TMPFILE%

rem pause

echo //This file contains the git info of the code as set by gitversion.bat > %OUTFILE%
rem GIT_VERSION - if modified, ends with '+'
echo #define GIT_VERSION "%GIT_VERSION%" >> %OUTFILE%
rem GIT_STATUS - raw output of git status (may not be very useful)
rem echo #define GIT_STATUS ^"%GIT_STATUS%^" >> %OUTFILE%
rem GIT_TAG - tag, if any
echo #define GIT_TAG ^"%GIT_TAG%^" >> %OUTFILE%
rem GIT_DATE - date of last commit (even if modified)
echo #define GIT_DATE ^"%GIT_DATE%^" >> %OUTFILE%
rem BUILD_DATE - date OUTFILE was created
echo #define BUILD_DATE "%DATE%" >> %OUTFILE%
rem BUILD_TIME - time OUTFILE was created
echo #define BUILD_TIME "%TIME%" >> %OUTFILE%

rem exit
