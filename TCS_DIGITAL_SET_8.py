'''
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
'''
if(len(set("".join(input().lower().split(" "))))==26):
    print("Pangram")
else:
    print("Not a Pangram")