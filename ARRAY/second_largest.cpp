#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[10];
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (ans < arr[i])
        {
            ans = arr[i];
        }
    }
    int second = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (ans != arr[i])
        {
            second = max(arr[i], second);
        }
    }
    cout << "Second Lagest Element is: " << second;
    return 0;
}