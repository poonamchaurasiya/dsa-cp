## How to compile and run C/C++ code manually by terminal/cmd

Compiler: g++ (MSYS2 UCRT64), available on PATH via `C:\msys64\ucrt64\bin`.

### Compile

```
g++ hello.cpp -o hello.exe
```

- `hello.cpp` -> source file
- `-o hello.exe` -> name of the output executable (optional; defaults to `a.exe`)

### Run

```
.\hello.exe
```

### Example session

```
D:\DEV\DSA>g++ hello.cpp -o hello

D:\DEV\DSA>hello
Setup Done
D:\DEV\DSA>
```

### Plain C files

```
gcc file.c -o file.exe
.\file.exe
```

### Useful flags

- `-Wall` -> enable common warnings
- `-std=c++17` (or `c++20`) -> set the C++ standard
- `-g` -> include debug symbols (for gdb/breakpoint debugging)

Example with flags:

```
g++ -Wall -std=c++17 hello.cpp -o hello.exe
```
