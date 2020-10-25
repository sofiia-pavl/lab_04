#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double x, R, xp, dx, xk, y;

    cout << " x = "; cin >> x;
    cout << " R = "; cin >> R;
    cout << " xp = "; cin >> xp;
    cout << " xk = "; cin >> xk;
    cout << " dx = "; cin >> dx;

    cout << fixed;
    cout << "-------------------" << endl;
    cout << "|" << setw(8) << "x    " << "|" << setw(8) << "F    " << "|" << endl;
    cout << "-------------------" << endl;

    x = xp;

    while (x <= xk) 
    {

        if (x <= -1)
            y = -x - 1;
        if (-1 < x && x <= 1)
            y = 0;
        else
            if (1 < x && x <= 1 + 2 * R)
                y = sqrt(R * R - (x - pow(1 + R, 2)));
            else
            y = -(x - 1. - 2. * R)/(7. - 1. - 2. * R);


        cout << "|" << setw(8) << setprecision(1) << x << "|" << setw(8) << setprecision(1) << y << "|" << endl;

        x += dx;

    }
    cout << "-------------------" << endl;

    cin.get();
    system("pause");
}