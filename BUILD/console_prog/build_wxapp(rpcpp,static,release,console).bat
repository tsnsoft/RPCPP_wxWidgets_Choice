@echo off

:: Устанавливаем переменную для основной папки (можно изменить на любой путь)
set DEV_DIR=D:\Development\RedPanda-CPP

:: Добавляем путь к папке bin в переменную окружения PATH
set PATH=%DEV_DIR%\mingw64\bin;%PATH%

:: Устанавливаем пути для упрощения
set WX_DIR=%DEV_DIR%\wxWidgets

:: Указываем нужные библиотеки
set LIBS=-lwxmsw32u_core -lwxbase32u -lwxpng -lwxjpeg -lwxtiff -lwxzlib -lwxregexu ^
         -lkernel32 -luser32 -lgdi32 -lwinspool -lcomdlg32 -ladvapi32 -lshell32 -lole32 -loleaut32 ^
         -luuid -lcomctl32 -lwsock32 -lodbc32 -lshlwapi -lversion -loleacc -luxtheme

:: Удаляем старый .exe файл если есть
if exist myapp.exe del myapp.exe

:: Компиляция с флагами
echo Compiling and assembling the program (static,release,console) ...
g++ -o myapp.exe *.cpp ^
    -I%WX_DIR%\include ^
    -I%WX_DIR%\lib\gcc_lib\mswu ^
    -L%WX_DIR%\lib\gcc_lib ^
    -mthreads ^
    %LIBS%  ^
    -static ^
    -O2 ^
    -DNDEBUG ^
    -finput-charset=utf-8 ^
    -lstdc++ ^
    -lsqlite3

:: Проверяем, успешно ли был собран .exe файл
if exist myapp.exe (
    echo Compilation completed successfully. Launching program ...
) else (
    echo Compilation error !
)
