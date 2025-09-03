#include<iostream>
#include <climits>
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
    
    int ans=INT_MAX;

    for(int i=0;i<5;i++)
    {
        if(arr[i]<ans)
        {
            ans=arr[i];
        }
    }
    cout<<"Smallest Number is: "<<ans;

    return 0;
    
}