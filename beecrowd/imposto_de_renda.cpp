#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main() {

    float entrada; cin >> entrada;

    cout << fixed << setprecision(2);
    if(entrada>2000 && entrada <= 3000) {
        entrada -= 2000;
        entrada *= 0.08;
        cout << "R$ " << entrada << endl;
    }
    else if(entrada>3000 && entrada <= 4500) {
        entrada -= 3000;
        entrada *= 0.18;
        entrada += 80;
        cout << "R$ " << entrada << endl;
    }
    else if(entrada>4500) {
        entrada -= 4500;
        entrada *= 0.28;
        entrada += 350;
        cout << "R$ " << entrada << endl;
    }
    else {
        cout << "Isento" << endl;
    }
}