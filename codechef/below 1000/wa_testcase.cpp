/*
input number of test cases
    1 test case include three input lines
            1st unput line: number of test cases
            2nd input line: test case size
            3rd input line: binary number
                0:test failed
                1:test passed

output: show smallest size where test failed

2   //two number of test cases
    3   //three test cases
        5 10 3     //size of 3 test cases
        000             // binary number of test      
        
                            cases showing weather passed or failed
    3
        5 10 3
        001


input: 
3
5
*/
#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        vector <int> e;
        //inputting n integers in a vector
        for(int j=0;j<a;j++)
        {
            int b;
            cin>>b;
            e.push_back(b);
        }
        //inputting binary number
        string bn;
        cin>>bn;
        vector <int> f;
        for(int k=0;k<a;k++)
        {
            if(bn[k]=='0')
            {
                f.push_back(e[k]);
            }
            
        }
        
        cout<<*min_element(f.begin(),f.end())<<endl;
    }
}