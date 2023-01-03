#include <bits/stdc++.h>
using namespace std;

char alfabeto[19] = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'x', 'z'};


char is_vowel(char vowel) {
    if(vowel == 'a' || vowel == 'e' || vowel == 'i' || vowel == 'o' || vowel == 'u') {
        return true;
    }
    return false;
}

char cos_prox(int index, char letra) {
    char lc;
    if(letra == 'z') return 'z';
    if(letra == 'b') return 'c';

    if(alfabeto[index] != letra && index < 19) {
        lc = cos_prox(index+1, letra);
    }else if(index != 0) {
        return alfabeto[index+1];
    }

    return lc;
}

int main() {

    string palavra; cin >> palavra;
	string nova_palavra = "";

	for(int i = 0; i < palavra.size(); i++) {
		bool v = is_vowel(palavra[i]);
		if(v) {
			nova_palavra+=palavra[i];
		}else {
			nova_palavra+=palavra[i];

			if(palavra[i] == 'b' || palavra[i] == 'c') {
				nova_palavra+='a';
			}else if(palavra[i] == 'd' || palavra[i] == 'f' || palavra[i] == 'g') {
				nova_palavra+='e';
			}else if(palavra[i] == 'h' || palavra[i] == 'j' || palavra[i] == 'k' || palavra[i] == 'l') {
				nova_palavra+='i';
			}else if(palavra[i] == 'm' || palavra[i] == 'n' || palavra[i] == 'p' || palavra[i] == 'q' || palavra[i] == 'r') {
				nova_palavra+='o';
			}else if(palavra[i] == 's' || palavra[i] == 't' || palavra[i] == 'v' || palavra[i] == 'x' || palavra[i] == 'z') {
				nova_palavra+='u';
			}

			nova_palavra+=cos_prox(0, palavra[i]);
		}
	}
	cout << nova_palavra << endl;

    return 0;
}