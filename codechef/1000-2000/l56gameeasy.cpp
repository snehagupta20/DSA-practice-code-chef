//codchef not accepting i dont know why 

#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        int odd=0;
        int b;
        cin>>b;
        int d[b];
        for(int j=0;j<b;j++)
        {
            cin>>d[j];
        }
        for(int k=0;k<b;k++)
        {
            if(d[k]%2!=0)
            {
                odd+=1;
            }
        }
        if(odd%2==0 || b==1)
        {
            cout<<"1"<<endl;
        }
        else if(odd%2!=0)
        {
            cout<<"2"<<endl;
        }
    }
}
//codchef not accepting i dont know why 

