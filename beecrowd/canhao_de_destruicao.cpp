#include <bits/stdc++.h>
using namespace std;
#define INF 9999999

pair<int, int> lista[55];
int m;

int mochila(int capacidade, int atual) {
    if(capacidade < 0) return -INF;
    if(atual == m) return 0;

    int pega = mochila(capacidade - lista[atual].second, atual+1) + lista[atual].first;
    int descarta = mochila(capacidade, atual+1);

    return max(pega, descarta);
}

int main() {

    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> m;
        for(int j = 0, x, y; j < m; j++) {
            cin >> x >> y;
            lista[i] = {x, y};
        }
        int k; cin >> k;
        int r = mochila(k, 0);
        int resistencia; cin >> resistencia;

        // cout << "mochila: " << r << endl;
        // cout << "Resistencia: " << resistencia << endl;

        if(r >= resistencia) {
            cout << "Missao completada com sucesso" << endl;
        }else {
            cout << "Falha na missao" << endl;
        }
    }

    return 0;
}
// aparentemente tudo certo mas tá dando erro :(