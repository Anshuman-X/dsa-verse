#include<iostream>
using namespace std;
int main()
{
    int n,prev=0,last=1,curr;
    cout<<"Enter a number:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<prev<<" ";
        curr=prev+last;
        prev=last;
        last=curr;

        
    }
    return 0;
}