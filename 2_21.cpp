#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int n, z = 0;
    int a[100];
    bool rule = false;
    cout << "������� �������� �������: " << endl;;

    for (int i = 1; 100; i++)
    {
        cin >> a[i];
        z++;
        if (a[i] == 0)
        {
            break;
        }
    }
    for (int i = 2; i < z; i++)
    {
        if (a[i - 1] <= a[i])
        {
            rule = true;
        }
    }

    if (rule == true)
    {
        cout << "������������������ �����������";
    }
    else
    {
        cout << "������������������ �� �����������";
    }

    return 0;
}