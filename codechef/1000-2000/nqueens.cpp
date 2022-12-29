#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        int b;
        cin>>b;
        float c=(0.143*b);
        float d=pow(c,b);
        cout<<round(d)<<endl;
    }
}