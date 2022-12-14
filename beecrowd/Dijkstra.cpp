#include <bits/stdc++.h>
using namespace std;

int main() {
    
    vector<string> vetor (1);
    string entrada;
    int qtd_de_joias = 0;

    while(cin >> entrada) {
        for(int i = 0; i < vetor.size(); i++) {
            if(entrada == vetor[i]) {
                break;
            }else {
                if(i == vetor.size()-1) {
                	qtd_de_joias+=1;
                    vetor.push_back(entrada);
                }
            }
        }
    }
    cout << qtd_de_joias << endl;
    
    return 0;
}