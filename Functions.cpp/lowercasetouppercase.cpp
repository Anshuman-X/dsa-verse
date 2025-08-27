#include<iostream>
using namespace std;

char convert(char hehe){
char ans=hehe-'a'+'A';
cout<<ans;

}
int main()
{
    char name;
    cout<<"Enter the character: ";
    cin>>name;
   convert(name);
}