/*
 * funkcje.cpp
 */


#include <iostream>

using namespace std;

void sumuj(int a, int b) 
{
    cout <<"Suma:"<< a + b << endl;
}

    void odejmij(int a, int b) 
    {
        cout <<"Roznica:"<< a - b << endl;
    }

        void podziel(int a, int b) 
        {   
            cout <<"Iloraz:"<< a / b << endl;
        }
            void pomnoz(int a, int b) 
            {
                cout <<"Iloczyn:"<< a * b << endl;
            }
int main(int argc, char **argv)
{
    int a, b;
    cout << "Podaj liczby:";
    cin >> a >> b;

    sumuj (a,b);
    odejmij (a,b);
    podziel (a,b);
    pomnoz (a,b);
	return 0;
}

