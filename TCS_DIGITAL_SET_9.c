#include<stdio.h>
#include<limits.h>
int main()
{
    int m,n,k;
    scanf("%d %d %d",&m,&n,&k);
    int mat[m][n],dp[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    dp[0][0] = mat[0][0];
    for(int i=1;i<n;i++)
    {
        dp[0][i] = dp[0][i-1] + mat[0][i];
    }
    for(int i=1;i<m;i++)
    {
        dp[i][0] = dp[i-1][0] + mat[i][0];
    }

    for(int i=1;i<m;i++)
    {
        for(int j=1;j<n;j++)
        {
            dp[i][j] = dp[i][j-1] + dp[i-1][j] + mat[i][j] - dp[i-1][j-1];
        }
    }
    int max = INT_MIN,ans,ind_i,ind_j;
    for(int i=k-1;i<m;i++)
    {
        for(int j=k-1;j<n;j++)
        {   
            if(i-k<0 &&j-k<0)
            {
                ans = dp[i][j];
            }
            else if(i-k<0)
            {
                ans = dp[i][j] - dp[i][j-k];
            }
            else if(j-k<0)
            {
                ans = dp[i][j] - dp[i-k][j];
            }
            else
            {
                ans = dp[i][j] - dp[i][j-k] - dp[i-k][j] + dp[i-k][j-k];
            }
            if(ans>max)
            {
                max = ans;
                ind_i = i-(k-1);
                ind_j = j-(k-1);
            }
            
        }
    }
    for(int i=ind_i;i<ind_i+k;i++)
    {
        for(int j=ind_j;j<ind_j+k;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}