#HackerRank Problem
#Finding the percentage
num=int(input())
diction={}
for i in range(0,num):
    marks=[]
    key=input()
    #for j in range(0,3):
    marks=list(input())
    value=marks

    diction.update({key: value})
print(diction)