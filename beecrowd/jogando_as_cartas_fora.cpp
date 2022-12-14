#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int carta;
    while(cin >> carta && carta != 0) {
        queue<int> fila;

        for(int i = 1; i <= carta; i++) {
            fila.push(i);
        }
        vector<int> discard_cards;
        while(fila.size() > 1) {
            discard_cards.push_back(fila.front());
            fila.pop();
            fila.push(fila.front());
            fila.pop();
        }
        cout << "Discarded cards: ";
        for (int i = 0; i < discard_cards.size(); i++) {
            if(i == discard_cards.size()-1) {
                cout << discard_cards[i] << endl;
            }else {
                cout << discard_cards[i] << ", ";
            }
        }
        cout << "Remaining card: " << fila.front() << endl;
    }
}