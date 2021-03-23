//Duoti trys sveikieji skaičiai a, b, c. Raskite dviejų didesnių sandaugą


#include <iostream>

using namespace std;

int main() {

    int a, b, c;
    cout << "Iveskite tris skaicius atskirtus tarpais: ";
    cin >> a >> b >> c;


    int x1 = a*b;
    int x2 = a*c;
    int x3 = c*b;
    int max = 0;

    if (x1 > x2) {
        max = x1;
    } else {
        max = x2;
    }

    if (x3 > max){
        max = x3;
    }

    cout << "Didesniuju skaitemnu sandauga yra lygi: "<< max;


    return 0;
}
