#include<bits/stdc++.h>
using namespace std;
int main()
{
    string line = "This is a sentence in cpp";
    vector <string> stringArray;
    stringstream check1(line);
    string word;
    while(getline(check1,word,' '))
    {
        stringArray.push_back(word);
    }
    for(int i=0;i<stringArray.size();i++)
    {
        cout << stringArray[i] << endl;
    }
}