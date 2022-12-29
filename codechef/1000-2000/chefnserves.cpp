#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        int p1,p2,k;
        cin>> p1 >> p2 >> k;
        int b=(p1+p2)/k;
        if(b%2==0)
        {
            cout<<"CHEF"<<endl;
        }
        else if(b%2!=0)
        {
            cout<<"COOK"<<endl;
        }
    }
    return 0;
}