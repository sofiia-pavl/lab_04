#include <iostream> 
#include <iomanip>
#include <cmath> 

using namespace std;

int main() 
{
    double x, xp, xk, dx, A, B, y;

    cout << "xp = "; cin >> xp;    
    cout << "xk = "; cin >> xk;     
    cout << "dx = "; cin >> dx;

    cout << fixed;    
    cout << "---------------------------" << endl;     
    cout << "|" << setw(5) << "x" << "     |" 
         << setw(7) << "y" << "       |" << endl;     
    cout << "---------------------------" << endl;

    x = xp;     
    while (x <= xk) { A = x * x;         
    if (x < -1)            
        B = sin(x)/1 + cos(x) * cos(x);
    else            
        if (x > 1)                
            B = log10(x + 0.4);            
        else                 
            B = cos(x) * cos(x) * sin(x) * sin(x) - 1;        
    y = A + B;         
    cout << "|" << setw(7) << setprecision(2) << x 
        << "   |" << setw(10) << setprecision(3) << y 
        << "    |" << endl;         
    x += dx; 
    }    
    cout << "---------------------------" << endl;

    return 0;
}