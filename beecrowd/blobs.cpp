#include <iostream>
 
using namespace std;
 
int main() {
 
    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        double kg; cin >> kg;
        int dias = 0;
        while(kg>1) {
            kg /= 2;
            dias++;
        }
        cout << dias << " dias" << endl;
    }
 
    return 0;
}