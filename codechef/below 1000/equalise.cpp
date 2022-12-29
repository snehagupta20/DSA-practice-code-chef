#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a,b,count=0;
        cin>> a >> b;
        if(a>b)
        {
            while(a>b)
            {
                b=b*2;
                if(a==b)
                {
                    cout<<"yes"<<endl;
                    count=count+1;
                    break;
                }
            }
        }
        
        else if(a<b)
        {
            while(b>a)
            {
                a=a*2;
                if(b==a)
                {
                    cout<<"yes"<<endl;
                    count=count+1;
                    break;
                }
            }
    
        }
        
        else if(a==b)
        {
            cout<<"yes"<<endl;
            count=count+1;
        }
        if(count==0)
        {
            cout<<"no"<<endl;
        }
    }
}