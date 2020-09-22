'''
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
'''
from itertools import permutations
p = list(permutations(list(input())))
for i in p:
    print("".join(i))