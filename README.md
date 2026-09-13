# C++ OOP Practice

A small collection of C++ practice code focused on object-oriented programming concepts.

## Current example

The repository currently contains an example of **runtime polymorphism (late binding)** using virtual functions.

The program defines a base class and two derived classes, then stores objects through base-class pointers. Calling `display()` through those pointers demonstrates how the overridden function is selected at runtime.

Example output:

```text
One
Two
Three
```

## Run locally

Clone the repository:

```bash
git clone https://github.com/Chetan-code-lrca/CPP_using_OOP.git
cd CPP_using_OOP
```

Compile the current source file with a C++ compiler such as `g++`:

```bash
g++ "VIRTUAL FUNCTONS(Late Binding)" -std=c++17 -o virtual_functions
```

Run it on Linux/macOS:

```bash
./virtual_functions
```

On Windows with MinGW:

```powershell
.\virtual_functions.exe
```

## Code

The source file is named:

```text
VIRTUAL FUNCTONS(Late Binding)
```

The filename contains a spelling mistake from the original exercise (`FUNCTONS`). It is kept as-is so the documented command matches the repository.

## What this demonstrates

- Inheritance
- Virtual functions
- Function overriding
- Base-class pointers
- Runtime polymorphism

## Notes

This is a practice repository rather than a reusable C++ library. New examples can be added as separate source files as additional OOP concepts are covered.
