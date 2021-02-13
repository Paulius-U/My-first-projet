#include <iostream>
#include <string>
#include <iomanip>

using std::cin;
using std::cout;
using std::string;
using std::endl; 
using std::setw;


int main()
{
    string eil1, eil2, eil, vardas, sauktukas = "!", fileris, zvaigzdutes;
    int n, ilgis;
    eil1 = "Sveikas, ";
    eil2 = "Sveika, ";
    cout << "Iveskite savo varda: "; cin >> vardas;
    if(vardas.back() == 's') eil = eil1;
    else eil = eil2;
    eil += vardas;
    eil += sauktukas;
    eil = "* " + eil + " *"; 
    ilgis = eil.length();
    while(ilgis > 0)
    {
        zvaigzdutes += "*";
        ilgis--;
    }
    ilgis = eil.length();
    ilgis -= 1;
    cout << zvaigzdutes << endl;
    cout << "*" << setw(ilgis) << "*" << endl;
    cout << eil << endl;
    cout << "*" << setw(ilgis) << "*" << endl;
    cout << zvaigzdutes << endl;
    return 0;
}
