/*
 * Sobowiec_dzielniki.cpp
 */

#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int wartosc;
    cout << "Podaj wartosc: ";
    cin >> wartosc;
    cout << "Dzielniki liczby: " << wartosc << " " << "Wynoszą: ";
    for (int i = wartosc; i > 0; i--)
    {
        if (wartosc % i == 0)
            cout << wartosc / i << "  ";
    }
	return 0;
}

