#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;
    vector<int> pares(n);
    vector<int> impares(n);

    for(int i = 0; i < n; i++) {
        int x; cin >> x;

        if(x%2 == 0) pares.push_back(x);
        else if(x%2 == 1) impares.push_back(x);
    }
    sort(pares.begin(), pares.end());
    for(int i = 0; i < pares.size(); i++) {
        if(pares[i] != 0) cout << pares[i] << endl;
    }

    sort(impares.begin(), impares.end());
    for(int i = impares.size()-1; i >= 0; i--) { 
        if(impares[i] != 0) cout << impares[i] << endl;
    }

    return 0;
}