/*
Pangram Checking
Given a string check if it is Pangram or not. A pangram is a sentence containing every
letter in the English Alphabet.
Examples : The quick brown fox jumps over the lazy dog ” is a Pangram [Contains all the
characters from „a‟ to „z‟]
“The quick brown fox jumps over the dog” is not a Pangram [Doesn‟t contains all the
characters from „a‟ to „z‟, as „l‟, „z‟, „y‟ are missing]
We create a mark[] array of Boolean type. We iterate through all the characters of our
string and whenever we see a character we mark it. Lowercase and Uppercase are
considered the same. So „A‟ and „a‟ are marked in index 0 and similarly „Z‟ and „z‟ are
marked in index 25.
After iterating through all the characters we check whether all the characters are marked
or not. If not then return false as this is not a pangram else return true.
*/
#include<stdio.h>
int main()
{
    char str[1000];
    scanf("%[^\n]s",str);
    int hash[26]={0},count=0;
    /*
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
            if(str[i]>=65 && str[i]<=90)
            {
                str[i] = str[i] + 32;
            }
            if(hash[str[i]-97]==0)
                count++;
            hash[str[i]-97]++;
        }
    }
    */
   int x=0,y;
   for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
            if(str[i]>=65 && str[i]<=90)
            {
                str[i] = str[i] + 32;
            }
            int k = str[i]-97;
            y = 1 << k;
            if((x&y)==0)
            {
                count++;
                x = x|y;
            }
        }
    }
    if(count==26)
        printf("Pangram");
    else
        printf("Not a Pangram");
}