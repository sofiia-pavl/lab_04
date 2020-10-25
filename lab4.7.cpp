#include <iostream> 
#include <iomanip> 
#include <cmath> 

using namespace std;

int main() 
{
    double xp, xk, x, dx, eps, a = 0, R = 0, S = 0;     
    double n = 1;

    cout << "xp = "; cin >> xp;     
    cout << "xk = "; cin >> xk;     
    cout << "dx = "; cin >> dx;     
    cout << "eps = "; cin >> eps;

    cout << fixed;

    cout << "-------------------------------------------------" << endl;         
    cout << "|" << setw(5) << "x" << "     |" 
         << setw(10) << "asin(x)" << "   |" 
         << setw(7) << "S" << "      |" 
         << setw(5) << "n" << "   |" 
         << endl;        
    cout << "-------------------------------------------------" << endl;     
    x = xp;    
    while (x <= xk) 
    {
        n = 1;                // вираз залежить від умови завдання варіанту         
        a = x;                // вираз залежить від умови завдання варіанту         
        S = a;         
        do{             
            n++;            
            R = pow(x, 2. * n + 1)/(2. * n + 1);          // вираз залежить від умови завдання варіанту            
            a *= R;            
            S += a;         
        }while (abs(a) <= 1); 

        cout << "|" << setw(7)  << setprecision(2) << x      << "   |" 
                    << setw(10) << setprecision(5) << asin(x) << "   |" 
                    << setw(10) << setprecision(5) << S      << "   |" 
                    << setw(5) <<     n                      << "   |" 
                    << endl;         
        x += dx;
    }         
        cout << "-------------------------------------------------" << endl;

    return 0;
}
