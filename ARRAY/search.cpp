#include <iostream>
using namespace std;
int main()
{
    int n, x;
    int arr[10];
    cout << "Enter the number to search: ";
    cin >> x;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter the elements in the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (x == arr[i])
        {
            cout << "Found at index number: " << i;
            break;
        }
    }

    return 0;
}