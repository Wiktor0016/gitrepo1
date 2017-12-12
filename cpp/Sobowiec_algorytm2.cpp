/*
 * algorytm2.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int n;
    cin >> n; 
 

    int suma = 0;
    int ile parzystych;
 
    for(int i=0; i<n; i++)
    {
        int liczba; 
        cin >> liczba;
     
        if(liczba % 2 = 0) 
            {
                suma += liczba;
                ile parzystych++;
            }
    }
 
    cout << "Parzyste: " << ile parzystych << "Suma: " << suma << endl;
	
	return 0;
}


