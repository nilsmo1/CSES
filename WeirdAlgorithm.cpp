#include <iostream>
using namespace std;
using ll = int64_t;

int main() {
    ll start;
    cin >> start;
    cout << start << " ";
    while (start != 1) {
        if (start % 2 == 0) {
            start /= 2;
            cout << start << " ";
        } else { 
            start *= 3;
            start += 1;
            cout << start << " ";
        }
    }
    cout << endl;
    return 0;
}
