#include<iostream>
using namespace std;
int main()
{
    int row,col;
    for(row=5;row>=1;row=row-1)
    {
        for(col=5;col>=1;col=col-1)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}