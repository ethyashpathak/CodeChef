//this problem involves a crazy mathematical trick!!...loved it
//ceil(n/4)=(n+3)/4
//-----------------------------
//You are given a positive integer N. You can perform the following operations on N any number of times:
//Subtract 2: If N > 2, you can change N to N - 2.
//Divide by 2: If N > 1 and N is even, you can change N to N / 2.
//
//
//
//
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        long long n; 
        cin >> n;
        long long ans;
        if (n % 2 == 1) {
            ans = (n + 1) / 2;
        } else {
            ans = n / 2 + (n + 3) / 4;
        }

        cout << ans << '\n';
    }
    return 0;
}