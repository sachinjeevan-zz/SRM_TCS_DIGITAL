/*
Write a code to check whether no is prime or not. Condition use function check()
to find whether entered no is positive or negative ,if negative then enter the no, And if
yes pas no as a parameter to prime() and check whether no is prime or not?
Whether the number is positive or not, if it is negative then print the message “please
enter the positive number”
It is positive then call the function prime and check whether the take positive number is
prime or not
*/
#include<stdio.h>
#include<math.h>
int isPrime(int N)
{
    if(N<=1)
        return 0;
    else if(N>3 && (N%2==0 || N%3==0))
        return 0;
    int k=1;
    int a = 6*k-1,b=6*k+1;
    int z = sqrt(N);
    while(a<=z || b<=z)
    {
        if(N%a==0 || N%b==0)
            return 0;
        k++;
        a = 6*k-1;
        b = 6*k+1;
    }
    return 1;
}
int main()
{
    int N;
    scanf("%d",&N);
    isPrime(N)==1?printf("Prime"):printf("Not a Prime");
}