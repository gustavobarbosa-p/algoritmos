#include <bits/stdc++.h>
using namespace std;
#define INF 9999999
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
// valeu samuel se não não tivesse visto esse optimize em teu repositório ia ficar dando time limit sempre KKKKKK

int f;
pair<int, int> lista[55];
int memo[5010][55];
bool pd[5010][55];

int mochila(int tamanho, int atual) {
    if(tamanho < 0) return -INF;
    if(atual == f) return 0;
    if(pd[tamanho][atual]) return memo[tamanho][atual];
    pd[tamanho][atual] = true;

    int pega = mochila(tamanho-lista[atual].first, atual+1) + lista[atual].second;
    int descarta = mochila(tamanho, atual+1);

    memo[tamanho][atual] = max(pega, descarta);

    return max(pega, descarta);
}

int main() {
    optimize;
    int index=1, c;
    while(cin >> c >> f && c!=0 && f!=0) {
        cout << "Teste " << index << endl;
        for(int i = 0, n, d; i < f; i++) {
            cin >> n >> d;
            lista[i] = {n, d};
        }
        cout << mochila(c, 0) << endl << endl;
        index++;

        for(int i = 0; i < 5010; i++)
            for(int j = 0; j < 55; j++)
                pd[i][j] = false;
    }

    return 0;
}