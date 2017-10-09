/*
 * petle_cw1.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    // int i;
    int suma = 0;
    int liczba = 0;
    int ilosc = 0;
    cout << "Wprowadzaj kolejne liczby" << endl;
    // for (;;)
    while (1) //pętla nieskończona
    {
        cout << " Podano: " << liczba << endl;
        ilosc++;
        cin >> liczba;
        suma += liczba;
        
        if (suma > 75)
            break;
    };
    
    cout << "Suma liczb:" << suma << endl;
    cout << "Ilosc liczb:" << ilosc << endl;
	return 0;
}

