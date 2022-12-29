#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    srand(time(NULL));
    int t=rand()%100+1;
    cout<<t<<endl;
    while(t--)
    {
        int sum=0;
        int a=rand()%1000+1;
        int b=rand()%1000+1;
        int c=rand()%1000+1;
        cout<<a<<" " << b <<" " << c<<" " <<endl;
        vector <int> e;
        e.push_back(a);
        e.push_back(b);
        e.push_back(c);
        /*for(int j=0;j<n;j++)
        {
            d[j]= rand()%1000+1;
            cout<<d[j]<<" ";
        }*/
        //cout<<endl;
        int d=*max_element(e.begin(),e.end());
        for(int j=0;j<3;j++)
        {
            if(e[j]!=d)
            {
                sum+=e[j];
            }
        }
        if((sum-d)==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }        
    }  
}
        
        