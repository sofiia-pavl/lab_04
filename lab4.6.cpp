#include <iostream> 
#include <cmath> 

using namespace std;

int main()
{
    double P, S;
    int n, k;

    P = 1;
    k = 1;
    while (k <= 25)
    {
        S = 0;
        n = 1;
        while (n <= k * k)
        {
            S += 1./n;
            n++;
        }
        P *= 1 + S;
        k++;
    }
    cout << P << endl;

    P = 1; 
    k = 1;   
    do { 
        S = 0;       
        n = 1;         
        do {
        S += 1./n;             
        n++; 
    } while (n <= k * k);         
    P *= 1 + S;         
    k++; 
    } while (k <= 25);     
    cout << P << endl;

    P = 1;     
    for (k = 1; k <= 25; k++) 
    {
        S = 0;         
        for (n = 1; n <= k * k; n++) 
        {
            S += 1./n; 
        }         
        P *= 1 + S; 
    }    
    cout << P << endl;

    P = 1;     
    for (k = 25; k >= 1; k--) 
    {
        S = 0;     

        for (n = k * k; n >= 1; n--) 
        {
            S += 1./n;
        }        
        P *= 1 + S;
    }     
    cout << P << endl;
    return 0;
}