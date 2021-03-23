//Studentas ruošiasi įsigyti naują kompiuterį. Apie kompiuterio kainą jis samprotauja taip:
//
//- jeigu kompiuteris pigesnis nei 1000 Eur, tai jis pernelyg pigus;
//- jeigu kompiuteris brangesnis nei 2500 Eur, tai jis pernelyg brangus;
//- jeigu kompiuterio kaina nuo 1000 iki 2500 Eur, tai jis yra toks, kokį pirkčiau.

#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Iveskite kompiuterio kaina:";
    cin >>a;
    if(a>0 && a<1000)
        cout <<"Studentui kompiuteris pernelyg pigus";
    if(a<=0)
        cout << "Neteisingai ivesta kaina";
    if(a>2500)
        cout<<"Studentui kompiuteris pernelyg brangus";
    if(a>=1000 && a<=2500)
        cout<<"Studentui kompiuterio kaina tinkama";
    return 0;
}
