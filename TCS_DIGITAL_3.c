/*
Given an n x n square matrix, find sum of all sub-squares of size k x k
Given an n x n square matrix, find sum of all sub-squares of size k x k where k is smaller
than or equal to n.
Examples :
Input:
n = 5, k = 3
arr[][] = { {1, 1, 1, 1, 1},
{2, 2, 2, 2, 2},
{3, 3, 3, 3, 3},
{4, 4, 4, 4, 4},
{5, 5, 5, 5, 5},
};
Output:
18 18 18
27 27 27
36 36 36
Input:
n = 3, k = 2
arr[][] = { {1, 2, 3},
{4, 5, 6},
{7, 8, 9},
};
Output:
12 16
24 28
*/
/*
Find Maximum Sum Submatrix in a given matrix
Given a M x N matrix, calculate maximum sum submatrix of size k x k in a given M x
N matrix in O(M*N) time. Here, 0 < k < M, N.
For example, consider below 5 x 5 matrix
[ 3 -4 6 -5 1 ]
[ 1 -2 8 -4 -2 ]
[ 3 -8 9 3 1 ]
[ -7 3 4 2 7 ]
[ -3 7 -5 7 -6 ]
If k = 2, maximum sum k x k sub-matrix is
[ 9 3 ]
[ 4 2 ]
If k = 3, maximum sum k x k sub-matrix is
[ 8 -4 -2 ]
[ 9 3 1 ]
[ 4 2 7 ]
*/
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int maximumSumSquareSubMatrix(int** mat,int m,int n,int K)
{
    int** dp = (int**)malloc(sizeof(int*)*m);
    for(int i=0;i<m;i++)
    {
        dp[i] = (int*)malloc(sizeof(int)*n);
    }
    dp[0][0] = mat[0][0];
    for(int i=1;i<n;i++)
    {
        dp[0][i] = dp[0][i-1]+mat[0][i];
    }
    for(int i=1;i<m;i++)
    {
        dp[i][0] = dp[i-1][0]+mat[i][0];
    }
    for(int i=1;i<m;i++)
    {
        for(int j=1;j<n;j++)
        {
            dp[i][j] = dp[i][j-1] + dp[i-1][j] + mat[i][j] - dp[i-1][j-1];
        }
    }
    int ans,max=INT_MIN;
    for(int i=K-1;i<m;i++)
    {
        for(int j=K-1;j<n;j++)
        {
            if((i-K<0 && j-K<0))
            {
                ans = dp[i][j];
            }
            else if(i-K<0)
            {
                ans = dp[i][j] - dp[i][j-K];
            }
            else if(j-K<0)
            {
                ans = dp[i][j] - dp[i-K][j];
            }
            else
            {
                ans = dp[i][j] - dp[i][j-K] - dp[i-K][j] + dp[i-K][j-K];
            }
            if(ans>max)
                max = ans;
            printf("%d ",ans);
        }
        printf("\n");
    }
    return max;
    
}
int main()
{
    int m,n,k;
    scanf("%d %d %d",&m,&n,&k);
    int** mat = (int**)malloc(sizeof(int*)*m);
    for(int i=0;i<m;i++)
    {
        mat[i] = (int*)malloc(sizeof(int)*n);
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    int a = maximumSumSquareSubMatrix(mat,m,n,k);
    printf("%d",a);
}
