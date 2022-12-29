/*
a,c=<b

*/
#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        int d,b,c;
        cin>> d >> b >> c;
        if(d<=b && c<=b)
        {
            cout<<"yes";
        }
        else
        {
            cout<<"no";
        }
    }
}