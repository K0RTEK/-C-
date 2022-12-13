#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n, t, i;
    int x;
    cout << "x = "; cin >> x;
    cout << "n = "; cin >> n;
    int* a = new int[n];
    for (i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > 0) t = i;
    }
    for (i = 0; i <= t; i++)
        cout << a[i] << ' ';
    cout << x << ' ';
    for (i = t + 1; i < n; i++)
        cout << a[i] << ' ';
    cout << endl;
    delete[] a;
    _getch();
}