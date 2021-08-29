//HackerRank Problem
//Print the spelling for the corresponding n or 'greater than 9' if n>9
#include<stdio.h>
char num[100][100] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "Greater than 9"};
int main() 
{
    // Complete the code.
    int n;
    scanf("%d",&n);
    if(n>9) 
        n=10;
    printf("%s",num[n]);
    return 0;
}
