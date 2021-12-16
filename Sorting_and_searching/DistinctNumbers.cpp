#include <iostream>
#include <set>
using namespace std;
using ll = int64_t;

int main() {
    ll n;
    cin >> n;
    set<ll> seen;
    for (ll i=0; i<n; i++){
        ll num;
        cin >> num;
        seen.insert(num);
    }
    cout << seen.size() << endl;
    return 0;
}
