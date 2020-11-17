# VSCode_Threading_Config_Files
Visual Studio Code setup files for threading using clang++ and debugging using GDB

This took me a while to get down but I finally got it to work. 
You need to build a task that runs with clang++ but also with certain flags. Check out tasks.json.
Then lldb was freezing with VS Code so use gdb as the debugger. 
