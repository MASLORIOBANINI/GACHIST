#include <iostream>
using std::cout;
using std::cin;
using std::endl;

/*среднее арифм двух числ*/

int main() {
	double a, b;
	cout << " first number:";
	cin >> a;
	cout << "second number:";
	cin >> b;
	cout << "average:" << ((a + b) / 2.0) << endl;
}