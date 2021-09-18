#HackerRank Problem
#String Split and Join
#Split the entered string and then join '-' with every word in the string and print the output
#function
def splitjoin(string):
    a=string.split() #splitting the string with " " => string broken to a list of strings
    b='-'.join(a) #adding/joining "-" after every element(string) of the list
    return b

string=input()
result=splitjoin(string)
print(result)