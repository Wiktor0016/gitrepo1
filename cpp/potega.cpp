/*
 * potega.cpp
 * 
 * a0 = 1
 * a1 = a
 * an = a * ... * a (n-czynników) dla n zaw. N+ - {1}
 */


#include <iostream>

using namespace std;

float potega_it(float x, int n)
{
    float wynik = 1;
    for (int i = 1; i <= n; i++)
    {
        wynik = wynik * x;
    }
    return wynik;
}

int main(int argc, char **argv)
{
    int n;
    float x;
    cout << "Podaj podstawe potêgi: " << endl;
    cin >> x;
    cout << "Podaj wyk³adnik potêgi: " << endl;
    cin >> n;
    cout << "Potêga: " << potega_it(x, n) <<endl;
	return 0;
}


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))