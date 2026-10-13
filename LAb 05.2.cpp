// Лабораторна робота № 5.2
// Варіант 29

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void S(const double x, const double eps, int& n, double& s);
void A(const double x, const int n, double& a);

int main()
{
    double xp, xk, x, dx, eps, s = 0;
    int n = 0;

    cout << "xp = ";
    cin >> xp;

    cout << "xk = ";
    cin >> xk;

    cout << "dx = ";
    cin >> dx;

    cout << "eps = ";
    cin >> eps;

    if (xp < -1 || xk > 1 || xp > xk || dx <= 0 || eps <= 0)
    {
        cout << "Incorrect input!" << endl;
        return 1;
    }

    cout << fixed;
    cout << "-------------------------------------------------" << endl;
    cout << "|" << setw(4) << "x" << "      |"
        << setw(10) << "atan(x)" << "   |"
        << setw(10) << "S" << "   |"
        << setw(5) << "n" << "   |"
        << endl;
    cout << "-------------------------------------------------" << endl;

    x = xp;

    while (x <= xk + dx * 0.000001)
    {
        S(x, eps, n, s);

        cout << "|" << setw(7) << setprecision(2) << x << "   |"
            << setw(10) << setprecision(5) << atan(x) << "   |"
            << setw(10) << setprecision(5) << s << "   |"
            << setw(5) << n << "   |"
            << endl;

        x += dx;
    }

    cout << "-------------------------------------------------" << endl;

    return 0;
}

void S(const double x, const double eps, int& n, double& s)
{
    n = 0;

    double a = x;
    s = 0;

    do
    {
        s += a;
        n++;

        A(x, n, a);

    } while (fabs(a) >= eps);
}

void A(const double x, const int n, double& a)
{
    a = -a * x * x * (2.0 * n - 1) / (2.0 * n + 1);
}
