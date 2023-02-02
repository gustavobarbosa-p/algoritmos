#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

ll n, k, in;
vector<ll> prefix;

int buscab(int comeco, int final) {
    int f=final, meio;
    int soma=0;

    while(comeco<=final) {
        meio = (comeco+final)/2;

        if(prefix[f] - prefix[meio] == k) {
            soma+=1;
            comeco = meio+1;
            
        }else if(prefix[f] - prefix[meio] > k) {
            comeco = meio+1; 
        }else {
            final = meio-1;
        }
    }
    return soma;
}


int main() {
    optimize;

    cin >> n >> k;
    prefix.push_back(0);

    for(int i = 1; i <= n; i++) {
        cin >> in;
        prefix.push_back(prefix[i-1] + in);
    }
    

    ll soma = 0;
    for(int i = n; i >= 1; i--) {
        
        int retorno = buscab(0, i);

        soma+=retorno;
    }

    cout << soma << endl;

    return  0;
}
// 10 4
// 2 0 1 1 0 0 8 4 1 3

// 15 0
// 0 0 0 0 0 5 12 0 1 0 0 0 51 0 0

// Atualmente o código obtem um vetor de prefixos e nesse vetor de prefixos ele subtrai a posição
// atual pela posição "meio" utilizando uma busca binária, o for vai de n até 1 (decrescente) e o
// erro tá sendo que ele conta subconjuntos repetidos, a ideia que eu tenho para resolver esse problema é
// pegar a posição mais a esquerda do vetor de prefixos cujo a soma seja igual a k e começar
// a busca binária com posição final = primeira aparição de um elemento que está contido num conjunto que
// já foi calculado