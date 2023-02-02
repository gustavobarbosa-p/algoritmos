#include <bits/stdc++.h>
using namespace std;

int main() {
    int c; cin >> c;
    for(int i = 0; i < c; i++) {
        int n, l; cin >> n >> l;

        double baseMenor, baseMaior, altura; cin >> baseMenor >> baseMaior >> altura;

        double meio, volume, baixo=0, cima=altura;
        while((cima-baixo) > 0.000001) {
            meio = (cima+baixo)/2;

            volume = 3.14*meio /3 * (baseMenor*baseMenor + baseMenor*baseMaior + baseMaior*baseMaior);

            if(volume > (l/n)) {
                cima = meio;
            }else if(volume < (l/n)) {
                baixo = meio;
            }else {
                break;
            }
        }
        
        cout << fixed << setprecision(2);
        cout << "Cima: " << cima << endl;
    }

    return  0;
}

/*
Essa questão foi resolvida usando a busca binária na resposta mas
ainda não saiu de 10% W.A, achei estranho pq seguindo a fórmula
matemática do enunciado dela não era para estar apresentando
nenhum erro, inclusive já fiz ela até na mão =/
*/