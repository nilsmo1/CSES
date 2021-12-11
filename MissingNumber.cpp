#include <iostream>
using namespace std;
using ll = int64_t;

int main() {
    ll size; 
    cin >> size;
    ll arr[size-1];
    for (ll i=0; i<size-1; i++)
        cin >> arr[i];
    ll arithmeticSum = size*(size + 1)/2;
    ll sumOfArray = 0;
    for (ll i=0; i<size-1; i++)
        sumOfArray += arr[i];
    cout << arithmeticSum - sumOfArray << endl;
    return 0;
}
