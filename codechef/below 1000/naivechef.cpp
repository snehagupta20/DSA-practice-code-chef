#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
   
    for(int i=1;i<=t;i++)
    {
        vector <int> e;
        float count=0, count1=0;
        int n,a,b;
        cin>> n >> a >> b;
        for(int j=1;j<=n;j++)
        {
            int c;
            cin>>c;
            e.push_back(c);
        }
        for(int j=0;j<n;j++)
        {
            if(a==e[j])
            {
                count+=1;
            }
            if(b==e[j])
            {
                count1+=1;
            }
        }
        float prob1=count/n;
        float prob2=count1/n;
        cout<<prob1*prob2<<endl;
    }
}