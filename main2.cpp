/*Ex.1
#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i <= 3999; i++)
	{
		int integer = i;
		cout << integer << " ";

		if (integer >= 1000)
		{
			while (integer >= 1000)
			{
				cout << "M";
				integer -= 1000;
			}
		}

		if (integer >= 100)
		{
			if (integer >= 900)
			{
				cout << "CM";
				integer -= 900;
			}

			else if (integer >= 500)
			{
				cout << "D";
				integer -= 500;

				while (integer >= 100)
				{
					cout << "C";
					integer -= 100;
				}
			}

			else if (integer >= 400)
			{
				cout << "CD";
				integer -= 400;
			}

			else
			{
				while (integer >= 100)
				{
					cout << "C";
					integer -= 100;
				}
			}
		}

		if (integer >= 10)
		{
			if (integer >= 90)
			{
				cout << "XC";
				integer -= 90;
			}

			else if (integer >= 50)
			{
				cout << "L";
				integer -= 50;

				while (integer >= 10)
				{
					cout << "X";
					integer -= 10;
				}
			}

			else if (integer >= 40)
			{
				cout << "XL";
				integer -= 40;
			}

			else
			{
				while (integer >= 10)
				{
					cout << "X";
					integer -= 10;
				}
			}
		}

		if (integer == 9)
		{
			cout << "IX";
		}

		else if (integer >= 5)
		{
			cout << "V";
			integer -= 5;

			while (integer >= 1)
			{
				cout << "I";
				integer -= 1;
			}
		}

		else if (integer == 4)
		{
			cout << "IV";
		}

		else
		{
			while (integer >= 1)
			{
				cout << "I";
				integer -= 1;
			}
		}

		cout << endl;
	}

	return 0;
}*/

/*Ex.2
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	string roman;
	cin >> roman;
	int result = 0;

	for (int i = roman.length(); i > 0; i--)
	{
		if (roman[i - 1] == 'I')
		{
			result += 1;
		}

		else if (roman[i -1] == 'V')
		{
			if (i > 1 && roman[i - 2] == 'I')
			{
				result += 4;
				i--;
			}

			else
			{
				result += 5;
			}
		}

		else if (roman[i - 1] == 'X')
		{
			if (i > 1 && roman[i - 2] == 'I')
			{
				result += 9;
				i--;
			}

			else
			{
				result += 10;
			}
		}

		else if (roman[i -1] == 'L')
		{
			if (i > 1 && roman[i - 2] == 'X')
			{
				result += 40;
				i--;
			}

			else
			{
				result += 50;
			}
		}

		else if (roman[i -1] == 'C')
		{
			if (i > 1 && roman[i - 2] == 'X')
			{
				result += 90;
				i--;
			}

			else
			{
				result += 100;
			}
		}

		else if (roman[i - 1] == 'D')
		{
			if (i > 1 && roman[i - 2] == 'C')
			{
				result += 400;
				i--;
			}

			else
			{
				result += 500;
			}
		}

		else if (roman[i - 1] == 'M')
		{
			if (i > 1 && roman[i - 2] == 'C')
			{
				result += 900;
				i--;
			}

			else
			{
				result += 1000;
			}
		}
	}

	if (result < 1 || result > 3999)
	{
		cout << "Incorrect input";
	}

	else
	{
		cout << result;
	}

	return 0;
}*/

/*Ex.3
#include <iostream>
#define MIN -1000
#define MAX 2000
using namespace std;

int main()
{
	double input;
	cin >> input;

	if (input >= MIN && input <= MAX)
	{
		cout << input << " is in interval [" << MIN << ", " << MAX << "]" << endl;
	}

	else
	{
		cout << input << " isn't in interval [" << MIN << ", " << MAX << "]" << endl;
	}

	return 0;
}*/

/*Ex.4
#include <iostream>
using namespace std;

int main()
{
	int integer;
	cin >> integer;

	while (integer > 0)
	{
		cout << integer % 10 << endl;
		integer /= 10;
	}

	return 0;
}*/

/*Ex.5
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int start, end;

	cout << "Enter start of interval: ";
	cin >> start;

	cout << "Enter end of interval: ";
	cin >> end;

	srand(time(0));
	int random = rand();
	int result = (random % (end - start + 1)) + start;

	if (result > -1000 && result < 1000)
	{
		cout << abs(result) % 10 << endl;
		cout << abs((result / 10) % 10) << endl;
		cout << abs(result / 100);
	}

	return 0;
}*/

/*Ex.6
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int start, end;

	cout << "Enter start of interval: ";
	cin >> start;

	cout << "Enter end of interval: ";
	cin >> end;

	srand(time(0));
	double randomDouble = (double) rand() / RAND_MAX;
	cout << randomDouble << endl;
	double result = (randomDouble * (end - start)) + start;
	cout << result << endl;

	return 0;
}*/
