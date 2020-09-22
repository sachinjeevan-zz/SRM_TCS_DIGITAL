/*
Write a program to print all the combinations of the given word with or without
meaning (when unique characters are given).
Sample Input:
abc
Output:
abc
acb
bac
bca
cba
cab
*/
#include<stdio.h>
#include<string.h>
// bounding function
int isSafe(char ans[],int level,char ch)
{
    for(int i=0;i<level;i++)
    {
        if(ans[i]==ch)
            return 0;
    }
    return 1;
}
// state space tree
void solve(char str[],char ans[],int len,int level)
{
    if(level < len)
    {
        for(int i=0;i<len;i++)
        {
            if(isSafe(ans,level,str[i])==1)
            {
                ans[level] = str[i];
                solve(str,ans,len,level+1);
            }
        }
    }
    else
    {
        ans[level]='\0';
        printf("%s\n",ans);
    }
    
}
int main()
{
    char str[1000];
    scanf("%s",str);
    int len = strlen(str);
    char ans[len+1];
    for(int i=0;i<len;i++)
    {
        ans[0] = str[i];
        solve(str,ans,len,1);
    }
}