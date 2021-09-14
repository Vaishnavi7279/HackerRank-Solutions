#HackerRank problem
#Mutuations
def mutate_string(string, i, char):
    #string_new=list(string)
    l=len(string)
    string_new=string[:i]+char+string[i:l]
    return string_new

string=input()
i=int(input())
char=input()
strg=mutate_string(string, int(i), char)
print(strg)