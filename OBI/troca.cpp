#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, t; cin >> n >> t;
    int cima[n+1];
    int baixo[n+1];
    int soma[n+4];
    int prefix[n+4];
    memset(prefix, 0, sizeof(prefix));
    memset(soma, 0, sizeof(soma));

    for(int i = 1; i <= n; i++) cin >> cima[i];
    for(int i = 1; i <= n; i++) cin >> baixo[i];
    
    for(int i = 0; i < t; i++) {
        int c, f; cin >> c >> f;
        soma[c] += 1;
        soma[f+1] += -1;
    }
    
    for(int i = 1; i <= n; i++) {
        prefix[i] = prefix[i-1] + soma[i];
    }

    for(int i = 1; i <= n; i++) {
        if(i < n) {
        	if(prefix[i] > 0) {
                if(prefix[i]%2 == 1) cout << baixo[i] << " ";
                else cout << cima[i] << " ";
            }else {
                cout << cima[i] << " ";
            }
        }else {
            if(prefix[i] > 0) {
                if(prefix[i]%2 == 1) cout << baixo[i];
                else cout << cima[i];
            }else {
                cout << cima[i];
            }
        }
    }

    return 0;
}