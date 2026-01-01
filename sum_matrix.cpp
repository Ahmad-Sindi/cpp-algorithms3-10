#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

/*
 * Algorithm Challenge – Level 3 | #10 Sum of Matrix Elements
 *
 * This program fills a 3x3 matrix with random numbers,prints the matrix, then calculates and prints the sum of all its elements.
 *
 * The main goal of this challenge is to understand how to traverse all cells in a matrix and aggregate data into a single meaningful result.
 */

// Generates a random number within a given range
int RandNumbr(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

// Fills a 3x3 matrix with random numbers
void FillMatrxWithRandNums(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++) // Traverse rows
    {
        for (short j = 0; j < Cols; j++) // Traverse columns
        {
            arr[i][j] = RandNumbr(1, 9);
        }
    }
}

// Prints the matrix in formatted form
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            printf(" %0*d ", 2, arr[i][j]);
        }
        cout << endl;
    }
}

// Calculates the sum of all matrix elements
int SumOfMatrix(int arr[3][3], short Rows, short Cols)
{
    int Sum = 0;

    // Accumulate values from every cell
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            Sum += arr[i][j];
        }
    }

    return Sum;
}

int main()
{
    srand((unsigned)time(NULL)); // Seed random generator once

    int Matrix1[3][3];

    FillMatrxWithRandNums(Matrix1, 3, 3);

    cout << "Matrix:\n";
    PrintMatrix(Matrix1, 3, 3);

    cout << "\nSum Of Matrix = " << SumOfMatrix(Matrix1, 3, 3);

    return 0;
}
