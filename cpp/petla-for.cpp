/*
 * petla-for.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int j;
    int i;
    {   
    for (i = 1; i < 101; i++ )
 
        cout << "*";
        if (i % 10 == 0 )
        {
            for (j=0; j<9; j++)
            cout << "#";
            cout << i << endl;
        }
    
    }  
    
    
    
    return 0;
}

