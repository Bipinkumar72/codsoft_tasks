# Task 3 – Tic-Tac-Toe Game

## Overview

This project is a hybrid Tic-Tac-Toe application developed in C++ for the CodSoft C++ Programming Virtual Internship[cite: 4].

The project features dual implementation capabilities, allowing users to play a standard two-player game either via an interactive **Console Interface** or a native **Win32 Graphical User Interface (GUI)**[cite: 4].

## Features

- **Dual Mode Support:** Choose between Terminal Console mode or Native Windows GUI mode on launch[cite: 4]
- **Two-Player Gameplay:** Alternating turns for Player 'X' and Player 'O'[cite: 4]
- **3×3 Board Matrix:** Dynamic tracking and rendering of player moves[cite: 4]
- **Win Detection Engine:** Automatic evaluation across rows, columns, and diagonals[cite: 4]
- **Draw Detection:** Automatically recognizes full board states without a winner[cite: 4]
- **Move Validation:** Rejects occupied grid choices or out-of-range selection[cite: 4]
- **Play Again Option:** Easily restart and clear the game state[cite: 4]

## Technologies Used

- **Programming Language:** C++[cite: 4]
- **GUI Framework:** Windows API (Win32 API)[cite: 4]
- **I/O Handling:** C++ Standard Library (`<iostream>`, `<string>`)[cite: 4]
- **Platform:** Windows[cite: 4]

## Program Structure

The application code is structured inside an anonymous namespace to maintain localized scope[cite: 4]:

### Core Logic Functions
- `resetBoard()`: Re-initializes all 3x3 positions to empty spaces and resets player turns[cite: 4].
- `hasWon(char player)`: Checks row, column, and diagonal alignment conditions[cite: 4].
- `isDraw()`: Verifies if all cells are filled without a winning combination[cite: 4].

### Console Interface (`playConsoleGame`)
- Renders the grid directly to standard output[cite: 4].
- Validates input numbers (1-9) from standard input (`std::cin`)[cite: 4].
- Manages console game-loop iterations and repeat prompts[cite: 4].

### Win32 GUI Interface (`runGui` / `windowProcedure`)
- Renders a grid composed of interactive Win32 `BUTTON` controls[cite: 4].
- Updates button labels dynamic to user selection and disables used cells[cite: 4].
- Displays current turn status and victory messages in a dedicated UI text label[cite: 4].

## How to Play

1. Run the application executable[cite: 4].
2. Select desired execution mode when prompted[cite: 4]:
   - Enter `1` for **Console Game**[cite: 4]
   - Enter `2` for **Win32 GUI Game**[cite: 4]
3. **Console Mode:** Players take turns typing position numbers (1 to 9) to place their mark[cite: 4].
4. **GUI Mode:** Players take turns clicking on grid buttons to mark 'X' or 'O'[cite: 4].
5. The game automatically declares a winner or draw upon completion[cite: 4].
6. Use the **Play Again** prompt or button to restart[cite: 4].

## C++ Concepts Used

- Namespaces and global scope isolation[cite: 4]
- Multidimensional arrays (`char board[3][3]`)[cite: 4]
- Algorithm logic (grid match verification algorithms)[cite: 4]
- Console Stream manipulation and error clearing (`std::cin.clear`, `std::cin.ignore`)[cite: 4]
- Win32 API GUI component construction and window messaging[cite: 4]

## Internship Details

**Organization:** CodSoft  
**Internship Domain:** C++ Programming  
**Task:** Task 3 – Tic-Tac-Toe Game
