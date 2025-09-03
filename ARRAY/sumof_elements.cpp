#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    cout<<"Enter the elements: ";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];

        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum=sum+arr[i];

    }
    cout<<"Sum of elements: "<<sum<<endl;

return 0;
}