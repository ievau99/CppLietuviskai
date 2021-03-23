//Prašoma įvesti du sveikuosius skaičius a ir b bei operacijos simbolį c. Pagal pateiktus duomenis suformuojamas
//reiškinys: 2 * a c b = ir prašoma įvesti rezultatą. Programa patikrina, ar teisingai
//vartotojas apskaičiavo reiškinio reikšmę ir apie tai praneša ekrane.
#include <iostream>
#include <string>

using namespace std;

int main() {

    int a, b;
    char c;
    cout << "Iveskite du skaicius ir operacijos simboli:" << endl;
    cin >> a >> b >> c;
    cout << "Suskaiciuokite naujai suformuoto reiskinio reiksme " << 2 << '*' << a << c << b << "=" << endl;
    int d;
    cin >> d;
    if (c == '+' && 2 * a + b == d)
        cout << "Reiksme suskaiciuota teisingai";
    else if (c == '-' && 2 * a - b == d)
        cout << "Reiksme suskaiciuota teisingai";
    else if (c == '*' && 2 * a * b == d)
        cout << "Reiksme suskaiciuota teisingai";
    else if (c == '/' && 2 * a / b == d)
        cout << "Reiksme apskaiciuota teisingai";
    else
        cout << "Reiksme suskaiciuota neteingai";
    return 0;
}
