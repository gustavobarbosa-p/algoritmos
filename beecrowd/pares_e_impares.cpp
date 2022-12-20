#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;
    int lista[n-1];

    for(int i = 0; i <= n; i++) {
        cin >> lista[i];
    }
    // ordene a lista em ordem crescente
    sort(lista, lista+n);
    for(int i = 0; i <= n; i++) {
        cout << lista[i] << " ";
    }
    

    return 0;
}