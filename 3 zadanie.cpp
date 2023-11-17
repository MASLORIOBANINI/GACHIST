#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int sum = 0;
	cout << "введите нач диапазона" << endl;
	int n;
	cin >> n;
	cout << "введите конец диапазона" << endl;
	int t;
	cin >> t;
	cout << "" << endl;
	for (int i = n; i <= t; i++) {
		if (i % 2 == 0)
			sum += i;
	}

	cout << "результат" << sum;
}