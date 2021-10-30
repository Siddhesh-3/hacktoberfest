/ C++ program to count number of 0s in the given
// row-wise and column-wise sorted binary matrix.
#include <iostream>
using namespace std;
// define size of square matrix
#define N 5
 
// Function to count number of 0s in the given
// row-wise and column-wise sorted binary matrix.
int countZeroes(int mat[N][N])
{
    // start from bottom-left corner of the matrix
    int row = N - 1, col = 0;
 
    // stores number of zeroes in the matrix
    int count = 0;
 
    while (col < N)
    {
        // move up until you find a 0
        while (mat[row][col])
 
            // if zero is not found in current column,
            // we are done
            if (--row < 0)
                return count;
 
        // add 0s present in current column to result
        count += (row + 1);
 
        // move right to next column
        col++;
    }
 
    return count;
}
 
// Driver Program to test above functions
int main()
{
    int mat[N][N] =
    {
        { 0, 0, 0, 0, 1 },
        { 0, 0, 0, 1, 1 },
        { 0, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 1 }
    };
 
    cout << countZeroes(mat);
 
    return 0;
}
