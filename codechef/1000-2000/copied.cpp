#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        vector <int> v;
        int size;
        cin>>size;
        int max_element=INT16_MIN;
        for (int i = 0; i < size; i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
            if(a>max_element){
                max_element=a;
            }
        }
        cout<<max_element;
    }
    return 0;
}