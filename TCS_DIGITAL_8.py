'''
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
'''
import math
N = int(input())
x1,y1,x2,y2,x3,y3,x4,y4=10,20,-20,20,-20,-20,30,-20
m1,n1,m2,n2,m3,n3,m4,n4=20,20,-20,20,-20,-20,-20,-20
q = 4 if (N-1)%4==0 else (N-1)%4
V = math.ceil((N-1)/4)-1
if(N==1):
    print("10,0")
elif(q==1):
    print(x1+m1*V,y1+n1*V,sep=" ")
elif(q==2):
    print(x2+m2*V,y2+n2*V,sep=" ")
elif(q==3):
    print(x3+m3*V,y3+n3*V,sep=" ")
elif(q==4):
    print(x4+m4*V,y4+n4*V,sep=" ")