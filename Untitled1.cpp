#include <bits/stdc++.h>
using namespace std;

int main() {
    int product;
    cin >> product;

    if (product == 0) {
        cout << 10 << endl;
        return 0;
    }
    if (product == 1) {
        cout << 1 << endl;
        return 0;
    }

    vector<int> digits;
    for (int i = 9; i >= 2; --i) {
        while (product % i == 0) {
            digits.push_back(i);
            product /= i;
        }
    }

    if (product > 1) {
        cout << -1 << endl;
    } else {
        sort(digits.begin(), digits.end()); 
        for (int d : digits) {
            cout << d;
        }
        cout << endl;
    }

    return 0;
}
