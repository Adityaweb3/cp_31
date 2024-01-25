//  problem link : https://codeforces.com/problemset/problem/1903/A

#include <iostream>
#include<vector>
 
using namespace std;
#define ll long long
 
int main() {
    ll t;
    cin >> t;
    
    while (t--) {
        ll n, k;
        cin >> n >> k;
        vector<int> arr(n);
 
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
 
        bool possible = true;
 
        for (int i = 0; i < n - 1; i++) {
            if (k == 1 && arr[i] > arr[i + 1]) {
                possible = false;
                break;
            }
        }
 
        if (possible) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
 
    return 0;
} 