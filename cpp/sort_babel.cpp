/*
 * sort_babel.cpp
 */


#include <iostream>

using namespace std;

void wypelnij(int t[], int n, int maks)
{
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        t[i] = 1 + rand() % maks; 
    }
} 

void drukuj(int t[], int n)
{
    {
    for (int i = 0; i < n; i++)
        cout << t[i] << " ";
    }
    cout << endl;
} 

void zamie(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

void sort_wyb(int t[], int n)
{
    cout << "------- Sortowanie przez bąbelkowanie -------" << endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - 1; j++)
        {
            if (tab[j] > tab[j + 1]0
                zmien(tab[j], tab[j+1])
        }
    }
}
    
    
int main(int argc, char **argv)
{
	const int ile = 10;
    int tab[ile];
    wypelnij(tab, ile, 20);
    drukuj(tab, ile);
    sort_wyb(tab,ile);
    drukuj(tab, ile);
	return 0;
}
