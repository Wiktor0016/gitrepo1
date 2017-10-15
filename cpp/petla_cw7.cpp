/*
 * petla_cw7.cpp
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int m = 0;
    for (int m = 1 ; m < 3; m++)
    {
        cout << "Podaj numer miesiaca:";
        cin >> m;
        if (m > 0 && m < 13) break;
        else cout << "Zły numer" << endl;
    }
    
	return 0;
}
