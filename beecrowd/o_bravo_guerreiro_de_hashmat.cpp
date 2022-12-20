#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

    ll a, b;
    while(cin >> a >> b) {
        ll c = a - b;
        if(c < 0) c*=-1;
        cout << c << endl;
    }

    return 0;
}