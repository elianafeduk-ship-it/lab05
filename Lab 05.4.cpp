
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Обчислення одного доданка суми
double term(const int i)
{
    return 1.0 / i + sqrt(1.0 + pow(sin(1.0 * i), 2));
}

// Ітераційний спосіб обчислення суми
double S0(const int K, const int N)
{
    double s = 0.0;

    for (int i = K; i <= N; i++)
        s += term(i);

    return s;
}

// Рекурсивний спосіб: параметр збільшується
double S1(const int K, const int N, const int i)
{
    if (i > N)
        return 0.0;
    else
        return term(i) + S1(K, N, i + 1);
}

// Рекурсивний спосіб: параметр зменшується
double S2(const int K, const int N, const int i)
{
    if (i < K)
        return 0.0;
    else
        return term(i) + S2(K, N, i - 1);
}

// Рекурсивний спосіб із накопиченням суми:
// параметр збільшується
double S3(const int K, const int N, const int i, double t)
{
    t = t + term(i);

    if (i >= N)
        return t;
    else
        return S3(K, N, i + 1, t);
}

// Рекурсивний спосіб із накопиченням суми:
// параметр зменшується
double S4(const int K, const int N, const int i, double t)
{
    t = t + term(i);

    if (i <= K)
        return t;
    else
        return S4(K, N, i - 1, t);
}

int main()
{
    setlocale(LC_ALL, "");

    int K = 1;
    int N;

    cout << "Vvedit N (N >= 1): ";
    cin >> N;

    // Перевірка правильності введеного числа
    if (cin.fail() || N < 1)
    {
        cout << "Pomylka: N maie buty tsilym chyslom >= 1.\n";
        return 1;
    }

    // Виведення результатів із 10 знаками після крапки
    cout << fixed << setprecision(10);

    cout << "\nRezultaty obchyslennia:\n";
    cout << "---------------------------------------------\n";

    cout << "(iter)         S0 = " << S0(K, N) << '\n';
    cout << "(rekursiia ++) S1 = " << S1(K, N, K) << '\n';
    cout << "(rekursiia --) S2 = " << S2(K, N, N) << '\n';
    cout << "(nakopychennia ++) S3 = " << S3(K, N, K, 0.0) << '\n';
    cout << "(nakopychennia --) S4 = " << S4(K, N, N, 0.0) << '\n';

    cout << "---------------------------------------------\n";

    return 0;
}