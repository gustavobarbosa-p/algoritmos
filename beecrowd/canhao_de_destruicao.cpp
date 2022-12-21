#include <bits/stdc++.h>
using namespace std;
#define INF 9999999

pair<int, int> lista[55];
int n;
int memo[5005][105];
bool pd[5005][105];

int mochila(int capacidade, int atual) {
    if(capacidade < 0) return -INF;
    if(atual == n) return 0;
    if(pd[capacidade][atual]) return memo[capacidade][atual];

    int pega = mochila(capacidade - lista[atual].second, atual+1) + lista[atual].first;
    int descarta = mochila(capacidade, atual+1);
    
    pd[capacidade][atual] = true;

    return memo[capacidade][atual] = max(pega, descarta);
}

int main() {

    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n;

        for(int j = 0, poder, peso; j < n; j++) {
            cin >> poder >> peso;
            lista[j] = {poder, peso}; // eu tava colocando lista[i] = ... ao invés de lista[j] = ... por isso dava erro KKKKKKKKK, vacilo
        }
        int capacidade; cin >> capacidade;
        int r = mochila(capacidade, 0);
        int resistencia; cin >> resistencia;

        if(r >= resistencia) {
            cout << "Missao completada com sucesso" << endl;
        }else {
            cout << "Falha na missao" << endl;
        }
        
        for(int k = 0; k < 5005; k++)
            for(int l = 0; l < 105; l++)
                pd[k][l] = false;

    }

    return 0;
}