#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;

    for(int i = 0; i < n; i++) {
        vector<int> time (100);

        vector<string> op (2);
        cin >> op[0] >> op[1];

        if(op[0] == "E") {
            time[stoi(op[1])] += 1;
        }
        if(op[0] == "T") {
            for(int j = 0; j < 100; i++) {
                time[i] += stoi(op[1]);
            }   
        }
    }

    return 0;
}