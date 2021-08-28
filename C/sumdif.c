//HackerRank Problem
//Sum and Difference of 2 numbers- 2 int and 2 float
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int n1,n2;
    float f1,f2;
    scanf("%d %d",&n1,&n2);
    scanf("\n");
    scanf("%f %f",&f1,&f2);
    printf("%d %d",n1+n2,n1-n2);
    printf("\n%.1f %.1f",f1+f2,f1-f2);
    return 0;
}