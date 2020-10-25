#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double x, a, b, c, xp, dx, xk, F, L;

    cout << " x = "; cin >> x;
    cout << " a = "; cin >> a;
    cout << " b = "; cin >> b;
    cout << " c = "; cin >> c;

    cout << " xp = "; cin >> xp;
    cout << " xk = "; cin >> xk;
    cout << " dx = "; cin >> dx;

    cout << fixed;
    cout << "-------------------" << endl;
    cout << "|" << setw(8) << "x    " << "|" << setw(8) << "F    " << "|" << endl;
    cout << "-------------------" << endl;

    x = xp;

    while (x <= xk) {


        if (x < 5 && b != 0)
            L = a * pow(x + 7, 2) - b;
        if (x > 5 && b == 0)
            L = (x - c * a) / (a * x);
        else
            L = (x/c);

        F = L;

        cout << "|" << setw(8) << setprecision(1) << x << "|" << setw(8) << setprecision(1) << F << "|" << endl;

        x += dx;

    }
    cout << "-------------------" << endl;

    cin.get();
    system("pause");
    return 0;
}