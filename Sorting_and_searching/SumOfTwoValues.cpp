#include <iostream>
#include <set>
using namespace std;
using ll = int64_t;

int main() {
    ll n, x;
    cin >> n >> x;
    ll arr[n];
    set<ll> matches;
    for (ll i=0; i<n; i++) {
        ll num;
        cin >> num;
        if (matches.count(num)) {
            for (ll j=0; j<i; j++) {
                if (num+arr[j] == x) {
                    cout << i+1 << " " << j+1 << endl;
                    return 0;
                }
            }
        }
        arr[i] = num;
        matches.insert(x-num);
    }
    cout << "IMPOSSIBLE" << endl;    
    return 0;
}
