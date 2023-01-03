#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, k; cin >> n >> k;
    int vetor[n];
    
    for(int i = 0; i < n; i++) {
        cin >> vetor[i];
    }

    int prefix[n+2];
    prefix[0] = 0;
    for(int i = 1; i <= n; i++) {
        prefix[i] = prefix[i-1] + vetor[i-1];
    }

    int rt = 0;
    for(int i = 1; i <= n; i++) {
        if(prefix[i] == k || prefix[i]/k==k) rt++;
        // cout << prefix[i] << " ";     
    }
    cout << rt << endl;

    return  0;
}