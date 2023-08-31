#include <iostream>
#include <array>

using namespace std;

#define empty 0
#define N 9

bool isGridSafe(int grid[N][N], int row, int col, int num);
bool isEmptyLocation(int grid[N][N], int &row, int &col);
bool SolveSudoku(int grid[N][N]);
bool UsedInRow(int grid[N][N], int prow, int number);
bool UsedInCol(int grid[N][N], int pcol, int number);
bool UsedInBox(int grid[N][N], int boxBeginRow, int boxBeginCol, int number);
void printResult(int finalgrid[N][N]);
void inputSudoku(int grid[N][N]);

int main()
{
    int grid[N][N];

    inputSudoku(grid);

    if (SolveSudoku(grid))
        printResult(grid);
    else
        cout << "No solution found" << endl;

    return 0;
}

void inputSudoku(int grid[N][N])
{
    cout << "Enter the Sudoku puzzle (use 0 for empty cells):\n";
    for (int row = 0; row < N; row++)
    {
        for (int col = 0; col < N; col++)
        {
            cin >> grid[row][col];
        }
    }
    cout << endl << "Input over!!" << endl;
}

bool SolveSudoku(int grid[N][N])
{
    int row, col;
    if (!isEmptyLocation(grid, row, col))
        return true;
    for (int num = 1; num <= 9; num++)
    {
        if (isGridSafe(grid, row, col, num))
        {
            grid[row][col] = num;
            if (SolveSudoku(grid))
                return true;
            grid[row][col] = empty;
        }
    }
    return false;
}

bool isEmptyLocation(int grid[N][N], int &row, int &col)
{
    for (row = 0; row < N; row++)
        for (col = 0; col < N; col++)
            if (grid[row][col] == empty)
                return true;
    return false;
}

bool UsedInRow(int grid[N][N], int prow, int number)
{
    for (int col = 0; col < N; col++)
        if (grid[prow][col] == number)
            return true;
    return false;
}

bool UsedInCol(int grid[N][N], int pcol, int number)
{
    for (int row = 0; row < N; row++)
        if (grid[row][pcol] == number)
            return true;
    return false;
}

bool UsedInBox(int grid[N][N], int boxBeginRow, int boxBeginCol, int number)
{
    for (int row = 0; row < 3; row++)
        for (int col = 0; col < 3; col++)
            if (grid[row + boxBeginRow][col + boxBeginCol] == number)
                return true;
    return false;
}

bool isGridSafe(int grid[N][N], int prow, int pcol, int number)
{
    for (int i = 0; i < N; i++)
    {
        if (grid[prow][i] == number || grid[i][pcol] == number ||
            grid[prow - prow % 3 + i / 3][pcol - pcol % 3 + i % 3] == number)
        {
            return false;
        }
    }
    return true;
}

void printResult(int finalgrid[N][N])
{
    cout << "Sudoku Solution:\n";
    for (int row = 0; row < N; row++)
    {
        if (row != 0 && row % 3 == 0)
        {
            cout << "------+-------+------" << endl;
        }
        for (int col = 0; col < N; col++)
        {
            if (col != 0 && col % 3 == 0)
            {
                cout << "| ";
            }
            cout << finalgrid[row][col] << " ";
        }
        cout << endl;
    }
}

