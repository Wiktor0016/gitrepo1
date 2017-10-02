
#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char **argv)
{
    int a,b,c; // deklaracja i inicjacja zmiennej
    int obwod = 0;
    float p = 0;
    
    a = b = c = 0;
    cout << "Podaj boki: " <<endl;
    cin >> a >> b >> c;
    //~if (a + b > c)  {
        //~if (a + c > b) { 
            //~if (c + b > a) {
                //~count << "Da się utworzyć";
            //~}
        //~}  
    //~}
    if (a + b > c && a + c > b && c + b > a) {
        obwod = a + b + c;
        cout << "Obwód: " << obwod << endl;
        p = 0,5 * obwod;
        cout << "Współczynnik: " << p << endl;
    } else {
        cout << "Nie da się!";
    }

