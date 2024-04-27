#include <iostream>
#include <Windows.h>

using namespace std;

class calculator {
private:
	double num1, num2;
public:

	bool set_num1(double num1)
	{
		if (num1 != 0)
		{
			this->num1 = num1;
			return true;
		}
		return false;
	}
	bool set_num2(double num2)
	{
		if (num2 != 0)
		{
			this->num2 = num2;
			return true;
		}
		return false;
	}
	void setNum1(double value) 
	{
		if (value != 0)
		{
			num1 = value;
		}
		else
		{
			cout << "Неверное число!\n";
		}
	}
	void setNum2(double value)
	{
		if (value != 0)
		{
			num2 = value;
		}
		else
		{
			cout << "Неверное число!\n";
		}
	}
	double add()
	{
		return num1 + num2;
	}
	double multiply()
	{
		return num1 * num2;
	}
	double subtract_1_2()
	{
		return num2 - num1;
	}
	double subtract_2_1()
	{
		return num1 - num2;
	}
	double divide_1_2()
	{
		return num1 / num2;
	}
	double divide_2_1()
	{
		return num2 / num1;
	}
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	calculator calc;
	double value;

	while (true)
	{
		value = 0;
		while (!calc.set_num1(value))
		{
			cout << "Введите num1: ";
			cin >> value;
			if (value == 0)
			{
				cout << "Неверное число!\n";
			}
		}
		value = 0;
		while (!calc.set_num2(value))
		{
			cout << "Введите num2: ";
			cin >> value;
			if (value == 0)
			{
				cout << "Неверное число!\n";
			}
		}
		cout << "num1 + num2 = " << calc.add() << endl;
		cout << "num1 * num2 = " << calc.multiply() << endl;
		cout << "num2 - num1 = " << calc.subtract_1_2() << endl;
		cout << "num1 - num2 = " << calc.subtract_2_1() << endl;
		cout << "num1 / num2 = " << calc.divide_1_2() << endl;
		cout << "num2 / num1 = " << calc.divide_2_1() << endl;
	}
	return 0;
}