#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Ukrainian");
    double b[8];
	int i;
    cout << "Вкажiть 8 елементiв\n";
	   for (i = 0; i < 8; i++)
		cin >> b[i];
    cout << "Елементи масиву A:\n";
	for (i = 0; i < 8; i++)
		cout << "b[" << i << "]=" << b[i] << endl;
    double a[9];
	   for (i = 0; i < 9; i++)
    a[i] = ((b[i] + b[i + 1]) / 2);
    cout << "Елементи масиву B:\n";
	   for (i = 0; i < 9; i++)
	cout << "a[" << i << "]=" << a[i] << endl;

	return 0;

}