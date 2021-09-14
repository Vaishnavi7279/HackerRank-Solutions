#HackerRank Problem
#sWAP cASE
def swap_case(string):
    l=len(string)
    for i in range(0,l):
        if string[i]>='A' and string[i]<='Z':
            string[i]=string[i].lower()
    return string

string=input()
result=swap_case(string)
print(result)