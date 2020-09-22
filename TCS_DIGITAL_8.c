/*
Problem Statement
Our hoary culture had several great persons since time immemorial and king
vikramaditya‟s nava ratnas (nine gems) belongs to this ilk.They are named in the
following shloka:
Among these, Varahamihira was an astrologer of eminence and his book Brihat Jataak is
recokened as the ultimate authority in astrology.
He was once talking with Amarasimha,another gem among the nava ratnas and the
author of Sanskrit thesaurus, Amarakosha.
Amarasimha wanted to know the final position of a person, who starts from the origin 0 0
and travels per following scheme.
Scheme
He first turns right and travels 10 units of distance
His second turn is upward for 20 units
Third turn is to the left for 30 units
Fourth turn is the downward for 40 units
Fifth turn is to the right(again) for 50 units
… And thus he travels, every time increasing the travel distance by 10 units.
Test Cases
Case 1
Input : 3
Expected Output :-20 20
Case 2
Input: 4
Expected Output: -20 -20
Case 3
Input : 5
Expected Output : 30 -20
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int N;
    scanf("%d",&N);
    int x1=10,y1=20,x2=-20,y2=20,x3=-20,y3=-20,x4=30,y4=-20;
    int m1=20,n1=20,m2=-20,n2=20,m3=-20,n3=-20,m4=20,n4=-20;
    int q = (N-1)%4==0?4:(N-1)%4;
    int V = ceil((N-1)/4.0)-1;
    if(N==1)
    {
        printf("10,0");
    }
    elseif(q==1)
    {
        printf("%d,%d",x1+m1*V,y1+n1*V);
    }
    else if(q==2)
    {
        printf("%d,%d",x2+m2*V,y2+n2*V);
    }
    else if(q==3)
    {
        printf("%d,%d",x3+m3*V,y3+n3*V);
    }
    else if(q==4)
    {
        printf("%d,%d",x4+m4*V,y4+n4*V);
    }
}