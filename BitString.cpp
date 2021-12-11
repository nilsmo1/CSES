#include <iostream>
using namespace std;
using ll = int64_t;

int main() {
    ll n;
    cin >> n;
    ll MOD = 1e9+7;
    ll num = 1;
    ll count = 0;
    while (count < n) {
        num *= 2;
        num %= MOD;
        count++;
    }
    cout << num << endl;
    return 0;
}
