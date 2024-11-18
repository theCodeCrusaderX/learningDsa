ps : find the digonal sum of given given square matrix(n) that mean sum of first digonal and second digonal and if n is odd than exclude the middle ele i.e repeated ele.

burte approach ::

#include <iostream>
using namespace std;

int maxSum(int mat[][3],int row, int col)
{
    int fdig = 0;
    int sdig = 0;
    int n = row;
    int mid;
    
    if(n%2 != 0) {  //mid ele if n is odd which we have to exclude
        mid = mat[n/2][n/2];
    }
    
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(i == j) {  //first digonal sum
                fdig = fdig + mat[i][j];
            }
            if(i+j == row-1) {  //second digonal sum
                sdig = sdig + mat[i][j];
            }
        }
        
    }
    
    return (n % 2 == 0) ? (fdig + sdig) : (fdig + sdig - mid);
}

int main()
{
    int mat[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
    };


    int row = 3;
    int col = 3;
    
    cout << maxSum(mat,row,col);
    return 0;
}


// optimal code :;

// O(n) time complexity 


for(int i=0; i<n; i++)
{
  sum += mat[i][i];  //first digonal

  if(i != n-1-i) {
    sum += mat[i][n-1-i];  //second digonal
  }
}