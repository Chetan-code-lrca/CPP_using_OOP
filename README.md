# C++ OOP Practice

A small collection of C++ examples for object-oriented programming coursework. The current example demonstrates **runtime polymorphism (late binding)** through a base-class pointer.

## Example: virtual functions

The program defines a base class and two derived classes. It stores pointers to the objects in an array of `const Base*` and calls `display()` through each pointer. The runtime type selects the overridden method.

Expected output:

```text
One
Two
Three
```

## Requirements

- A C++17 compiler such as GCC or Clang

## Compile and run

Linux / macOS:

```bash
g++ -std=c++17 -Wall -Wextra -Wpedantic -Werror virtual_functions.cpp -o virtual_functions
./virtual_functions
```

Windows with MinGW:

```powershell
g++ -std=c++17 -Wall -Wextra -Wpedantic -Werror virtual_functions.cpp -o virtual_functions.exe
.\virtual_functions.exe
```

## Concepts demonstrated

- Inheritance
- Virtual functions and `override`
- Polymorphic calls through base-class pointers
- Virtual destructors

GitHub Actions compiles the example with warnings treated as errors and checks its exact output on each push and pull request.
