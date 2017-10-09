/*
 * petla-for2.cpp
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int suma = 0;
    int liczba = 0;
    int ilosc = 0;
    cout << "Wprowadzaj kolejne liczby:" << endl;
    
    while (1)
    {
        cin >> liczba;
        ilosc++;
        cout << "Podano:" << liczba << endl;
        suma += liczba;
        if (suma > 100)
            break;
    }
    cout << "Wpowadzono liczb:" << ilosc << endl;
    cout << "Suma liczb" << suma << endl;
	
	return 0;
}

