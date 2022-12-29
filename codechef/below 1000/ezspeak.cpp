#include <iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int count=0;
        int a;
        cin>>a;
        string c;
        cin>>c;
        for(int j=0;j<a;j++)
        {
            if(c[j]!='a' && c[j]!='e' && c[j]!='i' && c[j]!='o' && c[j]!='u')
            {
                count+=1;
                if(count>=4)
                {
                    cout<<"NO"<<endl;
                    break;
                }
            }
            else{
                count=0;
            }
        }
        if(count<4)
        {
            cout<<"YES"<<endl;
        }
    }
}