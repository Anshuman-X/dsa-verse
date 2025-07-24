#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    if(a>b)
    cout<<"first number is bigger then second number";
    else if(b>a)
    cout<<"second number is greater then first number";
    else
    cout<<"Both numbers can't be same";
    
}