#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;
    int amigo[100];
    bool vacuo[100];
    bool flag[100];

    memset(amigo, 0, sizeof(amigo));
    memset(vacuo, false, sizeof(vacuo));
    memset(flag, false, sizeof(flag));

    for(int i = 0; i < n; i++) {

        string op; cin >> op;
        int amg; cin >> amg;

        if(op == "R") {
            vacuo[amg] = true;
            for(int k = 0; k < 100; k++) {
                if(vacuo[k]) amigo[k]+=1;
            }
            
        }if(op == "T") {
            for(int j = 0; j < 100; j++) {
                if(vacuo[j]) amigo[j]+=amg-1;
            }
        }if(op == "E") {
            vacuo[amg] = false;
            for(int l = 0; l < 100; l++) {
                if(vacuo[l]) amigo[l]+=1;
            }
        }
    }
    for(int i = 0; i < 100; i++) {
        if(amigo[i] > 0) {
            if(vacuo[i]) {  
                cout << i << " -1" << endl;
            }else {
                cout << i << " " << amigo[i] << endl;
            }
        }
    }

    return 0;
}