# Rock Paper Scissors Game in C++

## Overview

This project is a simple console-based implementation of the classic game "Rock, Paper, Scissors" in C++. The game allows the player to choose between Rock, Paper, and Scissors, and then plays against the computer, which makes a random choice. The game announces the winner or if it's a draw based on the rules of Rock, Paper, Scissors.

## Features

- Simple and intuitive text-based user interface.
- Randomized AI opponent.
- Animation effect before revealing the AI's choice.
- Clear win/lose/draw determination.

## How to Play

1. Run the program.
2. Choose your move by entering:
   - `1` for Rock
   - `2` for Paper
   - `3` for Scissors
3. The AI will make a random choice.
4. The game will display the AI's choice and determine the result:
   - You win, lose, or draw.

## Code Structure

### Global Variables
- `char player`: Stores the player's choice.
- `int ai`: Stores the AI's randomly generated choice.
- `int result`: Stores the result of the game (win/lose/draw).

### Function Prototypes
- `int crand(int)`: Generates a random number between 1 and the given range.
- `void anime1(void)`: Displays an animation.
- `int condition()`: Determines the result of the game.
- `void display(int)`: Displays the choice (Rock/Paper/Scissors) based on the input.

### Main Function
- Clears the screen and presents the game title.
- Prompts the player to select Rock, Paper, or Scissors.
- Validates the player's input.
- Generates the AI's choice.
- Displays an animation.
- Displays both the AI's and player's choices.
- Determines and displays the result of the game.

### Function Definitions
- `int crand(int x)`: Uses `rand()` and `srand()` to generate a random number.
- `void anime1()`: Shows a short animation sequence.
- `int condition()`: Compares the player's choice with the AI's choice and returns the result.
- `void display(int d)`: Converts the numerical choice to its corresponding string representation.

## Requirements

- Windows OS for `windows.h` and `Sleep()`.
- C++ Standard Library.

Enjoy playing Rock, Paper, Scissors!
