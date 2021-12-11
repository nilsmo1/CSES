#include <iostream>
using namespace std;
using ll = int64_t;

int main() {
    ll n;
    cin >> n;
    if (n==1) {cout << 0 << endl; return 0;}
    ll arr[n];
    ll moves = 0;
    for (ll i=0; i<n; i++) {
        cin >> arr[i];
    }
    for (ll i=1; i<n; i++) {
        ll a = arr[i-1];
        ll b = arr[i];
        if (b<a) {
            moves += a-b;
            arr[i] += a-b;
        }
    }
    cout << moves << endl;
    return 0;
}
