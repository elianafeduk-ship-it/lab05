#include <iostream>
#include <iomanip>
#include "Functions.h"

using namespace std;

int main()
{
    int m, n;
    int maxLevel = 0;

    cout << "Enter positive integer m: ";
    cin >> m;

    cout << "Enter positive integer n: ";
    cin >> n;

    if (cin.fail() || m < 1 || n < 1)
    {
        cout << "Error: m and n must be positive integers.\n";
        return 1;
    }

    int result = Q(m, n, 1, maxLevel);

    cout << "\nResults:\n";
    cout << "-----------------------------------\n";
    cout << "Number m: " << m << '\n';
    cout << "Maximum summand n: " << n << '\n';
    cout << "Number of partitions Q(m,n): " << result << '\n';
    cout << "Maximum recursion level: " << maxLevel << '\n';
    cout << "-----------------------------------\n";

    return 0;
}

int main()
{
    int m, n;
    int maxLevel = 0;

    cout << "Enter positive integer m: ";
    cin >> m;

    cout << "Enter positive integer n: ";
    cin >> n;

    // Перевірка введених даних
    if (cin.fail() || m < 1 || n < 1)
    {
        cout << "Error: m and n must be positive integers.\n";
        return 1;
    }

    // Обчислення кількості розбиттів
    int result = Q(m, n, 1, maxLevel);

    // Виведення результатів
    cout << "\nResults:\n";
    cout << "-----------------------------------\n";
    cout << "Number m: " << m << '\n';
    cout << "Maximum summand n: " << n << '\n';
    cout << "Number of partitions Q(m,n): "
        << result << '\n';
    cout << "Maximum recursion level: "
        << maxLevel << '\n';
    cout << "-----------------------------------\n";

    return 0;
}
