//my way: gives out runtime error but works fine for me

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        vector <int> e;
        int b;
        cin>>b;
        for(int j=1;j<=b;j++)
        {
            int c;
            cin>>c;
            e.push_back(c);
        }
        for(int j=0;j<e.size();j++)
        {
            for(int k=0;k<e.size();k++)
            {
                if(j!=k)
                {
                    if((e[j]+e[k])%2==0)
                    {
                        e.push_back(e[j]+e[k]);
                        e.erase(e.begin()+j);
                        if(k==0)
                        {
                            e.erase(e.begin()+k);
                        }
                        else
                        {
                            e.erase(e.begin()+(k-1));
                        }
                    }
                }
            }
        }
        if((e[0]+e[1])%2==0)
        {
            cout<<"1";
        }
        else
        {
            cout<<e.size();
        }
    }
}