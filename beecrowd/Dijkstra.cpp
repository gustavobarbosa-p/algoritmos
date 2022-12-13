#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<string> vetor;
    int n; cin >> n;
    int j = 0;
    int i = 0;
    while(i < n) {
        string entrada; cin >> entrada;
        vetor.push_back(entrada);

        for(int i = 0; i < vetor.size()) {
            if(vetor.size()>1 && entrada == vetor[i]) {
                break;
            }else {
                j++;
            }
        }
        i++;
    }
    cout << j;
    
    return 0;
}