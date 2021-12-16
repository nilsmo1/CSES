#include <iostream>
using namespace std;
using ll = int64_t;

int main() {
    ll cases;
    cin >> cases;
    ll arr[cases][2];
    for (ll i=0; i<cases; i++)
        cin >> arr[i][0] >> arr[i][1];
    for (ll i=0; i<cases; i++) {
        ll a = max(arr[i][1], arr[i][0]);
        ll b = min(arr[i][1], arr[i][0]);
        if (b==0 && a!=0) {cout << "NO" << endl; continue;}
        if ((arr[i][0] +  arr[i][1])%3==0 && a <= 2*b){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
