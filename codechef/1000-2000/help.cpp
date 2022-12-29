#include<bits/stdc++.h>
using namespace std;

 
int main(){

    int t;
    cin >> t;
    if(t >=1 && t<=1000){
        while(t--){
            int k,n;
            
            int p = 0;
            // int sizea = 0;
            // int sizeb = 0;
            int A[100000];
            int B[100000];
            int C[100000];
            cin >> n;
            if(n<1 && n> 100000){
                return 0;
            }
            for(int i=0; i<n; i++){
                cin >> A[i];
                // sizea ++;
            }//cout <<endl;
            cin >> k;
            if(k<1 && k> 100000){
                return 0;
            }
            for(int i=0; i<k; i++){
                cin >> B[i];
                // sizeb ++;
            }//cout <<endl;
            for(int i=0; i<n; i++){
                int count = 0;
                for(int j=0; j<k; j++){
                    if(A[i] == B[j]){
                        count ++;
                    }
                }if (count == 0){
                    C[p] = A[i];
                    p++;
                }
            }
            for(int i=0; i<p; i++){
                cout << C[i] << " ";
            }
            cout << endl;
        }
    }else{
        return 0;
    }
    return 0;
}