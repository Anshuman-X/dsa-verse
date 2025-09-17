#include <iostream>
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
    for (int i = n - 1; i > 0; i--)
    {
        int index = 0;
        for (int j = 1; j <= i; j++)
        {
            if (arr[j] > arr[index])
                index = j;
        }
        swap(arr[i], arr[index]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}