#include<iostream>
using namespace std;
int main()
{
    int i,num,sum=0;
    cout<<"Enter the number: ";
    cin>>num;
    for(i=1;i<=num;i=i+1)
    {
        sum=sum+(i*i*i);
    }
    cout<<"sum of cubes: "<<sum;
}