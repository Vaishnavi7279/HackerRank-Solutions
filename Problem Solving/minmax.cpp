//HackerRank Problem
//Mini Max Sum
#include<iostream>
using namespace std;
int main()
{
    int array[50], min=0, max=0;
    for(int i=0 ; i<5 ; i++)
       cin>>array[i];
    int i, j, least, temp;
    for(i=0 ; i<4 ; i++) 
       {
          least=i;
          for(j=i+1 ; j<5 ; j++)
          if(array[j]<array[least])
            least=j;
          temp=array[i];
          array[i]=array[least];
          array[least]=temp;
       }
    for(int i=0 ; i<4 ; i++)
           min=array[i]+min;
    for(int i=1 ; i<5 ; i++)
           max=array[i]+max;
    cout<<min<<" "<<max;
    return 0;
}