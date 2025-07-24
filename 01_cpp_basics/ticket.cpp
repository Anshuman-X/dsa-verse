#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter the age: ";
    cin>>age;
    if(age<=12)
    cout<<"discount on ticket";
    else if(age>=65)
    cout<<"discount on ticket";
    else
    cout<<"No discount";
}