/*
 * Sobowiec_ułamek.cpp
 */

#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int a;
    int b;
    
    cout << "Podaj licznik: " << endl;
    cin >> a;
    
    cout << "Podaj mianownik: " << endl;
    cin >> b;
    
    int licznik = a;
    int mianownik = b;

     if( a != b )
       
        {
            if( a > b ) 
                
                {
                    a = a - b;
                }
            
            if( a < b ) 
                
                {
                    b = b - a;
                }
        }
        
        while( a != b );
        
    cout << "Dzielnik = " << a << endl;
   
    licznik = licznik / a;
    mianownik = mianownik / a;
    cout << licznik << " : " << mianownik << endl;
    
	return 0;
}

