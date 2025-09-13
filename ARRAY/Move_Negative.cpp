#include <iostream>
using namespace std;
int main()
{
    int arr[20];
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int index = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            swap(arr[index], arr[i]);
            index++;
        }
    }
    cout << "After Moving Negative numbers: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}