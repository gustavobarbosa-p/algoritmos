#include <bits/stdc++.h>
using namespace std;


char is_vowel(char vowel) {
    if(vowel == 'a' || vowel == 'e' || vowel == 'i' || vowel == 'o' || vowel == 'u') {
        return true;
    }
    return false;
}

char terceiro_caracter(char letra, int index) {
    char alfabeto[24] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'x', 'z'};
    if(alfabeto[index] != letra) return terceiro_caracter(letra, index+1);

    if(letra == 'z') {
        return 'z';
    }else {
        char letra_f = is_vowel(alfabeto[index+1]);
        if(!letra_f) {
            return letra_f;
        }
    }
    return true;
}



int main() {

    string palavra; cin >> palavra;
    string nova_palavra = "";
    string novo_caracter = "";

    for(int i = 0; i < palavra.size(); i++) {
        bool v = is_vowel(palavra[i]);
        if(v) {
            nova_palavra+=palavra[i];
        }else {
            novo_caracter+=palavra[i];
            //2° caracter: a vogal mais próxima da consoante original no alfabeto, com a regra adicional de que se a consoante original está à mesma distância de duas vogais, então a vogal mais próxima do início do alfabeto é usada.
            novo_caracter+=terceiro_caracter(palavra[i], 0);
            nova_palavra+=novo_caracter;
        }
    }
    cout << nova_palavra;

    return 0;
}

// Incompleta, ainda vou tentar resolver