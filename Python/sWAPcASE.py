#HackerRank Problem
#sWAP cASE
def swap_case(string):
    #taking a new empty string since strings are immutable 
    final_string=""
    #checking for every letter in the string and adding the swapped letter to the new string
    for letter in string:
        if letter.isupper() == True:
            final_string+=(letter.lower())
        elif(letter.islower()==True):
            final_string+=letter.upper()
        else:
            final_string+=letter
    #returning the final string
    return final_string

string=input()
result=swap_case(string)
print(result)