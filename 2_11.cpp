#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int n;
    int l;
    int a[100];
    bool rule;
    cout << "������� ���������� ���������: ";

    cin >> n;
    cout << "������� ������������������: ";
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

    }
    cout << "������������������: \n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';

    }
    cout << endl;
    if (a[0] == 0)
    {
        rule = false;
    }
    if (a[0] > 0)
    {
        cout << "������������������ �������������";
        rule = true;

    }
    if (a[0] < 0)
    {
        cout << "������������������ �������������";
        rule = true;

    }
    if (rule == false)
    {
        cout << "������������������ �������";
    }
    return 0;
}