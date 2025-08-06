#include <iostream>
#include <vector>
#include <numeric>   // For std::iota
#include <algorithm> // For std::reverse

using namespace std;

int main() {
    int N;
    cin >> N;
    cout << 2 << endl;
    vector<int> vec(N);
    iota(vec.begin(),vec.end(),1);
    
    for(int i=0;i<N;i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    reverse(vec.begin(),vec.end());
    for(int i=0;i<N;i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    
}