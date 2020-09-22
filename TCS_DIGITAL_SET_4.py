'''
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
'''
x = input()
y = input()
z = input()
d = ['a','e','i','o','u','A','E','I','O','U']
for i in range(len(x)):
    if(x[i] in d):
        x = x.replace(x[i],'%')
for i in range(len(y)):
    if(y[i] not in d):
        y = y.replace(y[i],'#')
z=z.upper()
print(x+y+z)
