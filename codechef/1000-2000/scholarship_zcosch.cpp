#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a<=50)
    {
        cout<<"100";
    }
    else if(a>=51 && a<=100)
    {
        cout<<"50";
    }
    else
    {
        cout<<"0";
    }
}