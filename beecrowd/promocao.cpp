#include <bits/stdc++.h>
using namespace std;
#define INF 9999999

int n;
pair<int, int> lista[101];
int memo[3010][110];
bool pd[3010][110];

int mochila(int capacidade, int item_atual) {
    if(capacidade < 0) return -INF;
    if(item_atual == n) return 0;
    if(pd[capacidade][item_atual]) return memo[capacidade][item_atual];

    int pega = mochila(capacidade - lista[item_atual].second, item_atual+1) + lista[item_atual].first; 
    int descarta = mochila(capacidade, item_atual+1);

    pd[capacidade][item_atual] = true;
    memo[capacidade][item_atual] = max(pega, descarta);

    return max(pega, descarta);
}

int main() {
    
    while(cin >> n && n != 0) {
        for(int i = 0, preco, peso; i < n; i++) {
            cin >> preco >> peso;
            lista[i] = {preco, peso};
        }
        int peso_max; cin >> peso_max;
        int resposta = mochila(peso_max, 0);
        
        cout << resposta << endl;

        for(int i = 0; i < 3010; i++)
            for(int j = 0; j < 110; j++)
                pd[i][j] = false;
    }
    return 0;
}