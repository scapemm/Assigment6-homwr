#include <bits/stdc++.h>
using namespace std;
int main(){
     int tt; cin>>tt;
     int n; cin >>n;
     while(tt--){
       int sum=0;
       for(int i=0; i<n; ++i){
        int k; cin>> k; sum+=k;
       }
       cout << sum << endl;
     }
    
}
