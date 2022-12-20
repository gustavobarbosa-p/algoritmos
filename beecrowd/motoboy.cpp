#include <bits/stdc++.h>
using namespace std;
#define INF 9999999

int n;
pair<int, int> lista[21];

int mochila(int total, int pedido_atual) {
    if(total < 0) return -INF;
    if(pedido_atual == n) return 0;

    int pega = mochila(total - lista[pedido_atual].second, pedido_atual+1) + lista[pedido_atual].first;
    int descarta = mochila(total, pedido_atual+1);

    return max(pega, descarta); 
}

int main() {

    while(cin >> n && n) {
        int p; cin >> p;
        for(int i = 0, pedido, tempo_total; i < n; i++) {
            cin >> pedido >> tempo_total;
            lista[i] = {pedido, tempo_total};
        }
        int resposta = mochila(p, 0);
        cout << resposta << " min." << endl;
    }    

    return 0;
}