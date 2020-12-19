#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int n;
	int a[100];
	int max = 0;
	cout << "Введите кол-ство элементов массива: ";
	cin >> n;
	cout << "Введите элементы массива: ";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << endl;
	cout << "Массив: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << ' ';
		if (a[i] > max)
			max = a[i];
	}
	cout << endl;
	cout << "Максимальный элемент: " << max;
	return 0;
}