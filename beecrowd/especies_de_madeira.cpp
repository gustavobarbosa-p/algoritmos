#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;
    string arvore;
    getline(cin, arvore);    
    getline(cin, arvore);
    cout << fixed << setprecision(4);

    for(int i = 0; i < n; i++) {
        int qtd = 0;
        map<string, int> mapa;

        while(getline(cin, arvore)) {
            if(arvore == "") break;
            mapa[arvore]++;
            qtd++;
        }

        for(auto i : mapa) {

            cout << i.first << " " << 100 * (double) i.second /qtd << endl;
        }
        if(i < n-1) cout << endl;
    }


    return 0;
}