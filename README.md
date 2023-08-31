# Sudoku Solver

A Sudoku solver implemented in C++ that uses a backtracking algorithm to solve Sudoku puzzles.

## Table of Contents

- [Introduction](#introduction)
- [Usage](#usage)
- [Input](#input)
- [Output](#output)
- [License](#license)

## Introduction

This program is designed to solve Sudoku puzzles using a recursive backtracking algorithm. Sudoku is a number puzzle game played on a 9x9 grid. The goal is to fill the grid with digits from 1 to 9 such that each row, column, and 3x3 subgrid (box) contains all the digits without repetition.

## Usage

This Code can be used to solve a Sudoku Puzzle.


## Input

When prompted, input the Sudoku puzzle as a 9x9 grid. Use '0' to represent empty cells. Here's an example:

Output: Enter the Sudoku puzzle (use 0 for empty cells):

Input:

5 3 0 0 7 0 0 0 0 \
6 0 0 1 9 5 0 0 0 \
0 9 8 0 0 0 0 6 0 \
8 0 0 0 6 0 0 0 3 \
4 0 0 8 0 3 0 0 1 \
7 0 0 0 2 0 0 0 6 \
0 6 0 0 0 0 2 8 0 \
0 0 0 4 1 9 0 0 5 \
0 0 0 0 8 0 0 7 9 

Output: Input over!!

## Output

After solving the Sudoku puzzle, the program will display the solution. Here's an example:



Sudoku Solution: 

5 3 4 | 6 7 8 | 9 1 2 \
6 7 2 | 1 9 5 | 3 4 8 \
1 9 8 | 3 4 2 | 5 6 7 \
------+-------+------ \
8 5 9 | 7 6 1 | 4 2 3 \
4 2 6 | 8 5 3 | 7 9 1 \
7 1 3 | 9 2 4 | 8 5 6 \
------+-------+------ \
9 6 1 | 5 3 7 | 2 8 4 \
2 8 7 | 4 1 9 | 6 3 5 \
3 4 5 | 2 8 6 | 1 7 9 

## License

This project is licensed under the [MIT License](LICENSE).
