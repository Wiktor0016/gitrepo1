

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    // char imie; // deklaracje zmienne znakowe 
    char imie [10]; //d deklaracje zmienne tablicowe
    int wiek;
    wiek =0; //inicjacja zmiennej 
    
	cout << "Witaj w C++";
    cout<< "Podaj imie:" ; 
    // cin>> imie;
    cin.getline(imie, 10); 
    cout << "Cześć," << imie << "!" << endl; 
    cin.ignore (); 
    cout << "Ile masz lat? "; 
    cin >> wiek;
    cout << " Urodziłeś się w roku" << 2017- wiek << endl; 
	return 0;
}

