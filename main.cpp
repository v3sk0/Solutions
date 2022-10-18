/*Ex.1
#include <iostream>
using namespace std;

int  main()
{
    bool n;
	char ch;
	int integer;
	float fl;
	double d;

	cout << "Enter bool value: ";
	cin >> n;
	cout << "Enter char value: ";
	cin >> ch;
	cout << "Enter int value: ";
	cin >> integer;
	cout << "Enter float value: ";
	cin >> fl;
	cout << "Enter double value: ";
	cin >> d;
	return 0;
}*/

/*Ex.2
#include <iostream>
using namespace std;

int main()
{
	int n, m;

	cout << "Enter value for first variable: ";
	cin >> n;
	cout << "Enter value for second variable: ";
	cin >> m;
	cout << "Addition: " << n + m << endl;
	cout << "Subtraction: " << n - m << endl;
	cout << "Multiplication: " << n * m << endl;
	cout << "Division: " << n / m << endl;
	cout << "Remainder of the division: " << n % m << endl;
	return 0;
}*/

/*Ex.3
#include <iostream>
using namespace std;

int main()
{
	int n, m;

	cout << "Enter value for first variable: ";
	cin >> n;
	cout << "Enter value for second variable: ";
	cin >> m;

	n += 5;
	m += 5;
	cout << "Addition of 5: " << n << " " << m << endl;
	n -= 3;
	m -= 3;
	cout << "Subtraction of 3: " << n << " " << m << endl;
	n *= 6;
	m *= 6;
	cout << "Multiplication with 6: " << n << " " << m << endl;
	n /= 2;
	m /= 2;
	cout << "Division with 2: " << n << " " << m << endl;
	n %= 10;
	m %= 10;
	cout << "Remainder of the division with 10: " << n << " " << m << endl;
	return 0;
}*/

/*Ex.4
#include <iostream>
using namespace std;

int main()
{
	int n, m;

	cout << "Enter value for first variable: ";
	cin >> n;
	cout << "Enter value for second variable: ";
	cin >> m;

	n = n ^ m;
	m = n ^ m;
	n = n ^ m;

	cout << "First variable: " << n << endl;
	cout << "Second variable: " << m << endl;
	return 0;
}*/