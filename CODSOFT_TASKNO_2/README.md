# Task 2 – Simple Calculator

## Overview

This project is a native Win32 Desktop Calculator Application developed in C++ as part of the CodSoft C++ Programming Virtual Internship.

The application allows users to perform standard mathematical arithmetic operations (Addition, Subtraction, Multiplication, and Division) through an intuitive graphical window interface with built-in input parsing and error recovery[cite: 3].

## Features

- Native Windows GUI built directly using pure Win32 API controls[cite: 3]
- Input entry boxes for primary and secondary numbers[cite: 3]
- Four dedicated operation buttons: `+`, `-`, `×`, and `÷`[cite: 3]
- Read-only display field for formatted calculation results[cite: 3]
- Input validation that catches non-numeric input without crashing[cite: 3]
- Explicit protection against division by zero with safety alerts[cite: 3]

## Technologies Used

- **Programming Language:** C++[cite: 3]
- **GUI Framework:** Windows API (Win32 API)[cite: 3]
- **Standard Library Components:** `<string>`, `<sstream>`[cite: 3]
- **Platform:** Windows[cite: 3]

## Program Structure

The application's structural pipeline consists of:

### `Calculate(char operation)`
Handles core evaluation and string conversion logic[cite: 3]:
- Extracting raw user input strings using `GetWindowTextA`[cite: 3]
- Converting string inputs to floating-point numbers via `std::stod` wrapped in a `try-catch` block[cite: 3]
- Executing arithmetic operations based on the operator passed (`+`, `-`, `*`, `/`)[cite: 3]
- Intercepting `0` division conditions prior to calculation[cite: 3]
- Formatting and rendering computed outputs back onto the UI result control[cite: 3]

### `WindowProcedure` & `WinMain`
Handles native OS messaging and UI window loops[cite: 3]:
- Creating text controls (`STATIC`), text boxes (`EDIT`), and command buttons (`BUTTON`)[cite: 3]
- Mapping control identifiers (`ID_ADD`, `ID_SUB`, `ID_MUL`, `ID_DIV`) to event triggers[cite: 3]
- Managing window loops and lifecycle messages (`WM_CREATE`, `WM_COMMAND`, `WM_DESTROY`)[cite: 3]

## How the Calculator Works

1. Launch the executable[cite: 3].
2. Enter the first number into the **First Number** text box[cite: 3].
3. Enter the second number into the **Second Number** text box[cite: 3].
4. Click any of the operation buttons (`+`, `-`, `×`, `÷`)[cite: 3].
5. The calculated result will automatically display in the read-only **Result** box[cite: 3].
6. If an invalid value is entered or zero division is attempted, an appropriate warning will display[cite: 3].

## C++ Concepts Used

- String manipulation and string stream formatting (`std::ostringstream`, `std::stod`)[cite: 3]
- Exception handling (`try-catch` blocks)[cite: 3]
- Win32 API window lifecycle and message handling routines[cite: 3]
- UI control management and dynamic window text updates (`SetWindowTextA`, `GetWindowTextA`)[cite: 3]

## Internship Details

**Organization:** CodSoft  
**Internship Domain:** C++ Programming  
**Task:** Task 2 – Simple Calculator
