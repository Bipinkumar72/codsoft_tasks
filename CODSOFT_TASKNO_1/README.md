# Task 1 – Random Number Guessing Game

## Overview

This project is a graphical Random Number Guessing Game developed in C++ as part of the CodSoft C++ Programming Virtual Internship[cite: 5].

The application generates a random number between 1 and 100 and allows the user to guess the number through a graphical user interface[cite: 2, 5]. After each guess, the application provides feedback indicating whether the guessed number is too high or too low[cite: 2, 5].

## Features

- Generates a random number between 1 and 100[cite: 2, 5]
- Graphical user interface using the Windows API[cite: 2, 5]
- Accepts user guesses through an input field[cite: 2, 5]
- Provides "Too High" and "Too Low" feedback[cite: 2, 5]
- Tracks the total number of attempts[cite: 2, 5]
- Displays victory notifications when the correct number is guessed[cite: 2, 5]
- Start "New Game" functionality to reset and generate a new random target[cite: 2, 5]
- Validates user input to prevent non-integer or out-of-bounds input errors[cite: 2, 5]

## Technologies Used

- **Programming Language:** C++[cite: 5]
- **GUI Framework:** Windows API (Win32 API)[cite: 2, 5]
- **Random Number Generation:** C++ `<random>` library (`std::mt19937`)[cite: 2, 5]
- **Platform:** Windows[cite: 5]

## Program Structure

The application is modularized into two primary classes[cite: 5]:

### `NumberGuessGame`
Handles core game mechanics and business logic[cite: 2, 5]:
- Generating pseudo-random numbers using `std::mt19937`[cite: 2]
- Validating whether guesses lie within specified min/max bounds[cite: 2]
- Checking target equality and comparing relative value (too high / too low)[cite: 2]
- Tracking attempt count[cite: 2, 5]

### `GameUI`
Manages the Graphical User Interface and event handling[cite: 2, 5]:
- Registering window classes and creating native controls (input box, static text, buttons)[cite: 2]
- Running the Windows message dispatch loop[cite: 2]
- Parsing raw text input to integers securely with `std::strtol` and `errno` validation[cite: 2]
- Updating text labels dynamically upon user action[cite: 2]

## How the Game Works

1. Launch the application[cite: 5].
2. A random number between 1 and 100 is automatically generated upon initialization[cite: 2, 5].
3. Enter a numeric guess into the input field[cite: 5].
4. Click the **Guess** button (or press enter)[cite: 2, 5].
5. The status screen will inform you if your guess is:
   - Too high[cite: 2, 5]
   - Too low[cite: 2, 5]
   - Correct![cite: 2, 5]
6. The total attempts tracker updates after each valid attempt[cite: 2, 5].
7. Click **New Game** at any point to reset attempt counts and draw a new target[cite: 2, 5].

## C++ Concepts Used

- Classes, object encapsulation, and constructor delegation[cite: 2, 5]
- Member functions and const correctness[cite: 2, 5]
- Error handling and input parsing (`cerrno`, `std::strtol`)[cite: 2]
- Random number generation using standard C++11 engines[cite: 2, 5]
- Win32 API window creation, control handling, and message processing (`WM_COMMAND`, `WM_CREATE`)[cite: 2, 5]

## Internship Details

**Organization:** CodSoft[cite: 5]  
**Internship Domain:** C++ Programming[cite: 5]  
**Task:** Task 1 – Random Number Guessing Game[cite: 5]
