#include <iostream>
using namespace std;
using ll = int64_t;

int main() {
    ll n;
    cin >> n;
    ll total = 0;
    for (ll i=5; i<n+1; i+=5) {
        ll num = i;
        while (num%5==0) {
            total++;
            num/=5;
        }
    }
    cout << total << endl;
    return 0;
}
