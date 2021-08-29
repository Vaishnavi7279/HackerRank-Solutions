//HackerRank Problem
//Conditional statements in C
//Given a positive integer denoting
//n=<9 ; print the lowercase English word corresponding to the number (e.g., one for , two for , etc.).
//n>9 ; print even or odd
#include<stdio.h>
int main() 
{
    // Complete the code.
    char num[100][100]={"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "Greater than 9"};
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>9 && b>9) 
       {
           printf("%s",num[10]);
       }
    else 
      {
          for(int i=a ; i<=9 ; i++)
             {
                 printf("%s\n",num[i]);
             }
          for(int i=0 ; i<=b ; i++) 
            {
                if(i>9)
                  {
                      if(i%2==0)
                        printf("even\n");
                      else
                        printf("odd\n");
                  }
            }
      }
    return 0;
}
