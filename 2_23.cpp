#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	float max, n, a;
	int k = 0;
	cout << "������� n: ";
	cin >> n;
	max = sin(n + 1 / n);
	for (int i = 1; i <= n; i++)
	{
		if (n > 0)
		{
			a = sin(n + i / n);
			cout << a << " ";
			if (a > max)
			{
				max = a;
			}
			else
			{
				if (a == max)
				{
					k++;
				}
			}
		}
	}
	cout << endl << "������������ ��������: " << max;
	cout << endl << "��������� � ������������: " << k;
	return 0;
}