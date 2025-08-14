#include<iostream>
using namespace std;

int main()
{
    int rows = 5;

    for (int i = 1; i <= rows; i++) // rows
    {
        // Print spaces
        for (int space = 1; space <= rows - i; space++)
        {
            cout << "  "; // Two spaces for better alignment
        }

        // Print numbers in reverse
        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}
