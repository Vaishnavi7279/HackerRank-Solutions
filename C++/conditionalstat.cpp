//HackerRank Problem
//Print the spelling for the corresponding n or 'greater than 9' if n>9
#include <iostream>
#include <cstdio>
using namespace std;

string num[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "Greater than 9"};
int main() 
{
    // Complete the code.
    int n;
    cin>>n;
    if(n>9) 
        n=10;
    cout<<num[n]<<endl;
    return 0;
}
