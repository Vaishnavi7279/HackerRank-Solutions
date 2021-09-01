//HackerRank Problem
//Grading Students to the estimating number divisible by 5
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *grades=new int[n];
    for(int i=0 ; i<n ; i++)
       {
           cin>>grades[i];
       }
    for(int i=0 ; i<n ; i++)
       {
           if(grades[i]>33)
             {
                 if(grades[i]%5!=0)
                   {
                       int next=5*((grades[i]/5)+1);
                       if(next-grades[i]<3)
                         grades[i]=next;
                       else if(next-grades[i]>3)
                         grades[i]=grades[i]+grades[i]%5;
                   }
             }
       }
    for(int i=0 ; i<n ; i++)
       {
           cout<<grades[i]<<endl;
       }
}