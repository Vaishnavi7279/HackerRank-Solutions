//HackerRank Problem
//Sum of 2 digits via function
#include <iostream>
using namespace std;
int solveMeFirst(int a, int b) 
{
  int sum=0;
  sum=a+b;
  return sum;
}
int main() 
{
  int num1, num2;
  int sum;
  cin>>num1>>num2;
  sum=solveMeFirst(num1,num2);
  cout<<sum;
  return 0;
}
