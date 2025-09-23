#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key)
{

    // 60 55 50 40 30 20
    int start = 0;
    int end = n - 1;
    int mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            cout << "Found at index ";
            return mid;
        }
        else if (arr[mid] < key)
            end = mid - 1;

        else
            start = mid + 1;
    }
    return -1;
}
int main()
{
    int arr[1000];
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int key;
    cout << "Enter the key: ";
    cin >> key;

    cout << BinarySearch(arr, n, key);

    return 0;
}