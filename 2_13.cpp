#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int a, b, c;
    int d;
    double x1, x2;
    cout << "������� ���������� a,b,c= ";
    cin >> a;
    cin >> b;
    cin >> c;
    d = (b * b) - (4 * a * c);
    if (d < 0)
    {
        cout << "������ ���!";
    }
    if (d > 0)
    {
        x1 = (-b + sqrt(d)) / 2 * a;
        x2 = (-b - sqrt(d)) / 2 * a;
        cout << "����� ��������� �����= " << x1 << ' ' << x2;
    }
    if (d == 0)
    {
        x1 = -b / 2 * a;
        cout << "������ ��������� �����= " << x1;

    }
    return 0;
}