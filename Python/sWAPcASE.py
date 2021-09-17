#HackerRank Problem
#sWAP cASE
def swap_case(string):
    final_string=""
    l=len(string)
    for i in string:
        if i>='A' and string[i]<='Z':
            for j in final_string:
                j=(string[i].lower())
        elif(string[i]>='a' and string[i]<='z'):
            final_string=(string[i].upper())
    for char in string:
        if(char.isupper()==True):
            final_string+=(char.lower())
        elif(char.islower()==True):
            final_string+=(char.upper())
        else:
            final_string+=char
    return final_string

string=input()
result=swap_case(string)
print(result)
def swap_case(s):

    # sWAP cASE in Python - HackerRank Solution START
    Output = '';
    for char in s:
        if(char.isupper()==True):
            Output += (char.lower());
        elif(char.islower()==True):
            Output += (char.upper());
        else:
            Output += char;
    return Output;
    # sWAP cASE in Python - HackerRank Solution END

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)