#include <iostream>
using namespace std;
int main() {
    int arr[18];  
    int sum=0;
    int num;
    cout<<"Enter the elements: ";
    cin>>num;
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
        // sum+=arr[i];
    }
    for (int i = 0; i<num; i++)
    {
        /* code */
        sum+=arr[i];
    }
    
    int avg= sum/num;
    cout<<"The average of elements is: "<<avg;
    return 0;
}