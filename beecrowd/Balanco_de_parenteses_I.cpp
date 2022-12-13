#include <bits/stdc++.h>
using namespace std;

int main() {
    string exprecao = "";

    while(cin>>exprecao) {
    
        stack<char> pilha;
        bool validacao = true;

        for(int i = 0; i < size(exprecao); i++) {
            if(exprecao[i] == '(') {
                pilha.push(exprecao[i]);
            }
            else if(exprecao[i] == ')' and size(pilha) > 0) {
                pilha.pop();
            }
            else if(exprecao[i] == ')' && size(pilha) == 0) {
                validacao = false;
                break;
            }
        }
        if(size(pilha) == 0 && validacao) {
            cout << "correct" << endl;
        }else {
            cout << "incorrect" << endl;
        }
    }
    return 0;
}