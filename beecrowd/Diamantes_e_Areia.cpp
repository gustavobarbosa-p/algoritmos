#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int n; cin >> n;

    for(int i = 0; i < n; i++) {
        stack<char> pilha;
        string escavacao;
        int diamantes = 0;

        cin >> escavacao;
        for(int i = 0; i < size(escavacao); i++) {
            if(escavacao[i] == '<') {
                pilha.push(escavacao[i]);
            }if(escavacao[i] == '>' && size(pilha) > 0) {
                pilha.pop();
                diamantes++;
            }
        }
        cout << diamantes << endl;
    }
 
    return 0;
}