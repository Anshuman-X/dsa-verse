#include <iostream>
using namespace std;
int main()
{
    int arr[6];
    cout << "Enter the elements: ";
    for (int i = 0; i < 6; i++)
        cin >> arr[i];

    int start = 0, end = 5;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    };

    for (int i = 0; i < 6; i++)
        cout << arr[i];

    return 0;
}