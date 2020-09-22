/*
String with a Twist
Link to this Questions
1. The program will recieve 3 English words inputs from STDIN
These three words will be read one at a time, in three separate line
The first word should be changed like all vowels should be replaced by %
The second word should be changed like all consonants should be replaced by #
The third word should be changed like all char should be converted to upper case
Then concatenate the three words and print them
Other than these concatenated word, no other characters/string should or message
should be written to STDOUT
For example if you print how are you then output should be h%wa#eYOU.
You can assume that input of each word will not exceed more than 5 chars

*/
#include<stdio.h>
int main()
{
    char str1[1000],str2[1000],str3[1000];
    scanf("%s %s %s",str1,str2,str3);
    for(int i=0;str1[i]!='\0';i++)
    {
        if(str1[i]=='a' || str1[i]=='e' || str1[i]=='i' || str1[i]=='o' || str1[i]=='u' || str1[i]=='A' || str1[i]=='E' || str1[i]=='I' || str1[i]=='O' || str1[i]=='U')
        {
            str1[i]='%';
        }
    }
    for(int i=0;str2[i]!='\0';i++)
    {
        if(!(str2[i]=='a' || str2[i]=='e' || str2[i]=='i' || str2[i]=='o' || str2[i]=='u' || str2[i]=='A' || str2[i]=='E' || str2[i]=='I' || str2[i]=='O' || str2[i]=='U') && ((str2[i]>=65 && str2[i]<=90) || (str2[i]>=97 && str2[i]<=122)))
        {
            str2[i]='#';
        }
    }
    for(int i=0;str3[i]!='\0';i++)
    {
        if(str3[i]>=97 && str3[i]<=122)
            str3[i] = str3[i]-32;
    }
    printf("%s%s%s",str1,str2,str3);
}