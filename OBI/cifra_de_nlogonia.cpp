#include <bits/stdc++.h>
using namespace std;

int main() {

    string palavra; cin >> palavra;
    string nova_palavra = "";
    string alfabeto = "abcdefghijklmnopqrstuvxz";

    map<int, string> mapa;

    for(int i = 0; i < 24; i++) {
        mapa[i] = alfabeto[i];
    }

    for(int i = 0; i < size(palavra); i++) {
        if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u') {
            nova_palavra += palavra[i];
        }else {
            nova_palavra += palavra[i];
            
        }
    }
    cout << nova_palavra;

    return 0;
}