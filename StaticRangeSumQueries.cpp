#include <iostream>
using namespace std;
using ll = int64_t;

int main() {
    ll s, n;
    cin >> s >> n;
    ll arr[s];
    ll qs[n][2];
    for (ll i=0; i<s; i++) {
        cin >> arr[i];
        if (i>0) { arr[i]+=arr[i-1]; }
    }
    for (ll i=0; i<n; i++) {
        cin >> qs[i][0] >> qs[i][1];
    }
    for (ll i=0; i<n; i++) {
        ll diff = 0;
        if (qs[i][0] == 1) { diff = 0; } 
        else { diff = arr[qs[i][0]-2]; }
        cout << arr[qs[i][1]-1] - diff << '\n';
    }
    return 0;
}
