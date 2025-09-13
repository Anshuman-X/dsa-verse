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
    int a, b;
    cout << "Enter a: " << endl;
    cin >> a;
    cout << "Enter b: " << endl;
    cin >> b;

    if (a > b)
        swap(a, b);
    cout << "Numbers between " << a << " and " << b << " are: ";
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > a && arr[i] < b)
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}