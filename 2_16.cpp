#include <iostream>
using namespace std;
int n;
int sum;
int main()
{
    setlocale(LC_ALL, "rus");
    int n;
    int s = 0;

    cout << "������� ���������� ��������� �������: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if ((i % 2) == 0)
        {
            s = s + i;
        }
        else
        {
            s = s - i;
        }
    }
    cout << endl;
    cout << "����� ��������� ������������������ �����: " << s;


    return 0;
}