#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of characters: ";
    cin >> n;
    char arr[n];
    cout << "Enter characters: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n - 1; i++)
    {
        int index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[index] > arr[j])
                index = j;
        }
        swap(arr[index], arr[i]);
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}