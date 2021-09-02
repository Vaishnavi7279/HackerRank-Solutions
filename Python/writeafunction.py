#HackerRank Solutions
#Write a function
#Write a function that takes a parameter and returns "True" if the given year is a leap year
def is_leap(year):
    leap=False
    if(year%400==0):
        leap=True
    elif(year%4==0 and year%100!=0):
        leap=True
    return leap
year=int(input())
print(is_leap(year))