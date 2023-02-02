#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        cout << fixed << setprecision(2);
        map<string, double> mapa;
        double soma = 0;
        
        int m; cin >> m;
        for(int j = 0; j < m; j++) {
            string fruta; cin >> fruta;
            double preco; cin >> preco;
            mapa[fruta] = preco;
        }
        int p; cin >> p;
        for(int k = 0; k < p; k++) {
            string produto; cin >> produto;
            int quantidade; cin >> quantidade;
            soma += mapa[produto] * quantidade;
        }
        cout << "R$ " << soma << endl;
    }

    return 0;
}

/*
Os 2 parâmentros do map são chave e valor
(num vetor comum seria a posição e o valor que ela armazena)

*/ 