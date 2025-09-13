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
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])

                cout << "Duplicate Number(s): " << arr[i] << " ";
            break;
        }
    }
    return 0;
}