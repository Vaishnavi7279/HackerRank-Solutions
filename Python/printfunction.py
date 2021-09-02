#HackerRank SOlutions
#Print Function
#For an input n, print the numbers till there as a string
n=int(input())
string="1"
for i in range(2,n+1):
    string=string+str(i)
print(string)