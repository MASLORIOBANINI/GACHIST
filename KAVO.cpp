
#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	cout << "введите число" << endl;
	int n;
	cin >> n;
	cout << "делители числа" << "" << n << ":S" << "";
	for (int i = 1; i <= n; ++i) {
		if (n % i == 0) { cout << i << ", ";
		}
	}
	cout << endl;
	return 0;
}
