/*
 * potęga.cpp
 * a0 = 1
 * a1 = a
 * an = a*...*a (n-czynników) dla n zaw. N+ - {1}
 */

#include <iostream>

using namespace std;

float potega_it(float x, int n){
    float wynik = 1;
    for (int i=0 ;i<n ;i++ ) {
        cout << i << endl;
    }
    return wynik;
}
int main(int argc, char **argv)
{
    int a=0;
    int b=0;
    
    cout << "Podaj podstawe i wykładnik potęgi" << (a, b) << endl;
    
    cin >> a;
    cin >> b;
    //pobierz od użytkownika podstawę i wykładnik
    int x=0;
    int n=0;
    cout << "Potęga:" << potega_it(x, n) << endl;
    
    
	return 0;
}

