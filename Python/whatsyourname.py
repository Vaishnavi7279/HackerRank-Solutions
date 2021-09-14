#HackerRank Problem
#Whats your name?
# Complete the 'print_full_name' function below.
# The function is expected to return a STRING.
# The function accepts following parameters:
#  1. STRING first
#  2. STRING last

def print_full_name(first, last):
    # Write your code here
    strg="Hello "+first+" "+last+"! You just delved into python."
    return strg

first_name = input()
last_name = input()
strg=print_full_name(first_name, last_name)
print(strg)