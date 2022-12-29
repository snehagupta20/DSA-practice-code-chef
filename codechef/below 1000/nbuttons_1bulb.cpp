/*
input number of test cases
    1 test case include three input lines
            1st unput line: number of buttons
            2nd input line: initial state of button
            3rd input line: final state of button
                
bulb is initially on;
    if state of any bulb changes ie, 0->1 or 1->0; the situation of bulb reverses



output: show wethaer the bulb is on or off

input:
2   //two number of test cases
    3   //three buttons
        000     //initial state of button

                only one button has changed so the state of the bulb reverses once i.e. it turns off.

        001            // final state of button      
        
                        
    2
        00
        11          
                    //two buttons have changed so the state of the bulb reverses twice i.e. it remains on.


output: 
0 
1

even number of changes: 1
odd number of changes=0
*/
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        int count=0;
        int b;
        cin>>b;
        string initial;
        cin>>initial;
        string final;
        cin>>final;
        for(int j=0;j<b;j++)
        {
            if(initial[j]!=final[j])
            {
                count+=1;
            }
        }
        if(count%2==0)
        {
            cout<<"1"<<endl;
        }
        else if(count%2!=0)
        {
            cout<<"0"<<endl;
        }
    }
}