#include<stdio.h>
void SOE(int arr[],int N)
{
    arr[0]=arr[1] = 0;
    for(int i=2;i<=N;i++)
    {
        arr[i] = 1;
    }
    // Selection
    for(int i=2;i*i<=N;i++)
    {
        if(arr[i]==1)
        {
            // elimination
            for(int j =i*i;j<=N;j+=i)
            {
                arr[j]=0;
            }
        }
    }
    
}
int main()
{
    int t,start,end;
    scanf("%d",&t);
    int arr[2001];
    SOE(arr,2000);
    for(int i=0;i<t;i++)
    {
        scanf("%d %d",&start,&end);
        for(int j=start;j+6<=end;j++)
          {
              if(arr[j]==1 && arr[j+6]==1)
              {
                  printf("(%d,%d) ",j,j+6);
              }
          }
          printf("\n");
    }
}