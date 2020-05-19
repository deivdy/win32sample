# Win32 Sample

## Requirements

 - [https://visualstudio.microsoft.com/pt-br/vs/](https://visualstudio.microsoft.com/pt-br/vs/)
 - ![enter image description here](https://raw.githubusercontent.com/deivdy/win32sample/master/vs-installer-workloads.png)

## Build commands
Run in CMD (**C:\Program Files (x86)\Microsoft Visual Studio\2019\Enterprise\VC\Auxiliary\Build\vcvarsall.bat**).

**Build Hello.exe**
cl /EHsc Hello.cpp

**Build CppCx.exe**
cl /EHsc /ZW CppCx.cpp /link /SUBSYSTEM:console

**Build MessageBox.exe**
cl MessageBox.cpp kernel32.lib user32.lib /O2 /link /entry:main /subsystem:windows

**For more information access:**
[https://docs.microsoft.com/pt-br/cpp/build/walkthrough-compiling-a-native-cpp-program-on-the-command-line](https://docs.microsoft.com/pt-br/cpp/build/walkthrough-compiling-a-native-cpp-program-on-the-command-line)
