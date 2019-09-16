#include<iostream>
using namespace std;
#define UNASSIGNED 0            
#define N 9
#define SQN 3
bool FindUnassignedLocation(int grid[N][N], int &row, int &col);  
bool UsedInRow(int grid[N][N], int row, int num)
{
    for (int col = 0; col < N; col++)
        if (grid[row][col] == num)
            return true;
    
return false;  }

bool UsedInCol(int grid[N][N], int col, int num)
{
    for (int row = 0; row < N; row++)
        if (grid[row][col] == num)
            return true;
    
return false;  }

bool UsedInBox(int grid[N][N], int boxStartRow, int boxStartCol, int num)
{
    for (int row = 0; row < SQN; row++)
        for (int col = 0; col < SQN; col++)
            if (grid[row+boxStartRow][col+boxStartCol] == num)
                return true;
    return false;
}
bool isSafe(int grid[N][N], int row, int col, int num)
{
return !UsedInRow(grid, row, num) &&
           !UsedInCol(grid, col, num) &&
           !UsedInBox(grid, row - row%SQN , col - col%SQN, num);
}

bool FindUnassignedLocation(int grid[N][N], int &row, int &col)
{
    for (row = 0; row < N; row++)
        for (col = 0; col < N; col++)
            if (grid[row][col] == UNASSIGNED)
                return true;
   
 return false;
}


bool SolveSudoku(int grid[N][N])
{     int row, col;
if (!FindUnassignedLocation(grid, row, col))
       return true;          // success!
for (int num = 1; num <= N; num++)
    {
       if (isSafe(grid, row, col, num))  // if looks promising
        {
            grid[row][col] = num;      // make tentative assignment
              if (SolveSudoku(grid))   // return, if success
                 return true;
            grid[row][col] = UNASSIGNED;  // failure, unmake & try again
        }
    }     
return false; // this triggers backtracking     
}



int main(){
int grid[N][N]={{0,3,0,2,8,7,0,5,0},{5,8,0,6,4,1,9,0,0},{1,0,0,9,0,0,0,2,4},{2,0,0,0,6,0,3,0,8},{0,9,5,0,0,0,2,6,0},{8,0,4,0,0,0,0,0,9},{6,2,0,0,0,5,4,0,3},{0,0,3,8,2,6,0,1,5},{0,5,0,3,1,4,0,9,0}};
if(SolveSudoku(grid)){
for(int i=0;i<N;i++){
for(int j=0;j<N;j++){
cout<<grid[i][j]<<" ";
}
cout<<"\n";
}
}
else{
SolveSudoku(grid);
}
return 0;
}
