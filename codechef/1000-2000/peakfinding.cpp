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
        //int max_element=INT16_MIN;
        for(int j=1;j<=b;j++)
        {
            int c;
            cin>>c;
            /*if(c>max_element)
            {
                max_element=c;
            }*/
            e.push_back(c);
        }
        cout<<*max_element(e.begin(),e.end())<<endl;
        //cout<<max_element<<endl;
    }
    return 0;
}