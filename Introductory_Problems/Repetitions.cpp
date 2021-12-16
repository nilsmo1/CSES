#include <iostream>
#include <string>
using namespace std;
using ll = int64_t;

int main() {
    string seq;
    cin >> seq;
    ll size = seq.size();
    ll longest = 1;
    ll count = 1;
    for (int i=0; i<size-1; i++) {
        if (seq[i] != seq[i+1]) {
            count = 1;
            continue;
        }
        count++;
        if (longest < count)
            longest = count;
    }
    cout << longest << endl;
    return 0;
}
