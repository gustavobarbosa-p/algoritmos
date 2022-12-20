#include <bits/stdc++.h>
using namespace std;

int main() {

    int largura; cin >> largura;
    int comprimento; cin >> comprimento;

    cout << (largura * comprimento) + ((largura-1) * (comprimento-1)) << endl;
    cout << (largura-1)*2 + (comprimento-1)*2 << endl;

    return 0;
}