#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int n;
    int s = 0;
    cout << "������� ����� ��������� �������: ";

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if ((i % 3) == 0)
        {
            s = s - i;
        }
        else
        {
            s = s + i;
        }
    }
    cout << endl;
    cout << "����� ��������� ������� �����: " << s;


    return 0;
}