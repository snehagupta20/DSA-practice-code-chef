#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int b=1;b<=a;b++)
    {
        int i;
        cin>>i;
        if(i<=100)
        {
            cout<<i<<endl;
        }
        else if(100<i && i<=1000)
        {
            cout<<i-25<<endl;
        }
        else if(1000<i && i<=5000)
        {
            cout<<i-100<<endl;
        }
        else if(i>5000)
        {
            cout<<i-500<<endl;
        }
    }
}