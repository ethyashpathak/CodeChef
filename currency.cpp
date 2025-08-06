#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;
    while (t--) {
       int A1;
       int B1;
       int A2;
       int B2;
       cin>>A1>>B1>>A2>>B2;
       int a=5 * A1 + B1;
       int b=5 * A2 + B2;
      if(abs((a) - (b)) % 6 == 0 && a>=b )
    {
           cout<<"YES"<<endl;
       }
       else{
           cout<<"NO"<<endl;
       }
    }
    return 0; 
}