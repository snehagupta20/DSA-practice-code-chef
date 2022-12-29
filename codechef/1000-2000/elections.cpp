#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        int a,b,c;
        cin>> a >> b >>c;
        if(a>50 && b<50 && c<50)
        {
            cout<<"A"<<endl;
        }
        else if(b>50 && a<50 && c<50)
        {
            cout<<"B"<<endl;
        }
        else if(c>50 && b<50 && a<50)
        {
            cout<<"C"<<endl;
        }
        else
        {
            cout<<"NOTA"<<endl;
        }
    }
}