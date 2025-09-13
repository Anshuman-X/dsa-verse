#include <iostream>
using namespace std;
int main()
{
    int arr[20];
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int total = n * (n + 1) / 2;
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum = sum + arr[i];
    }

    cout << "Missing Elements is: " << total - sum << endl;
    return 0;
}