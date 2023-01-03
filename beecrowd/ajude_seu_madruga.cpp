#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, a;
    while(cin >> n >> a && n+a) {
        int tiras[n];
        int soma = 0;
        for(int i = 0; i < n; i++) {
            cin >> tiras[i];
            soma+=tiras[i];
        }
        if(soma == a) {
            cout << ":D" << endl;
            continue;
        }else if(soma < a) {
            cout << "-.-" << endl;
            continue;
        }

        double esq=0, dir=10010, meio;
        while((dir-esq) > 0.000001) {
            meio = (esq+dir)/2;

            double corte = 0;
            for(int j = 0; j < n; j++)
                if(tiras[j] > meio)
                    corte += tiras[j]-meio;

            if(corte > a) esq = meio;
            else if(corte < a) dir = meio;

        }
        cout << fixed << setprecision(4);
        cout << meio << endl;
    }

    return 0;
}