#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

    ll n, f; cin >> n >> f;
    int vet[n];
    for (int i = 0; i < n; i++) {
        cin >> vet[i];
    }

    ll esq=0, dir=99999999, print;
    while(dir >= esq) {
        int meio = (dir+esq)/2, soma=0;

        soma = 0;
        for(int j = 0; j < n; j++)
            soma += meio/vet[j];

        if(soma >= f) {
            print=meio;
            dir = meio-1;
        }else {
            esq = meio+1;
        }
    }
    cout << print << endl;

    return 0;
}
