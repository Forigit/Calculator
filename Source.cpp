#include<iostream>
using namespace std;

class Calculator
{
public:
	double calculation(double a, double b, char c)
	{
		switch (c)
		{
		case'+':
			return	a + b;
			break;

		case'-':
			return	a - b;
			break;

		case'*':
			return	a * b;
			break;

		case'/':
			return	a / b;
			break;

		default:
			return 0.0;
		}
	}
};

int main()
{
    setlocale(LC_ALL, ("ru"));

    double a;
    double b;
    double result;
    char c;

    cout << "¬ведите первое число дл€ математических вычислений :"; cin >> a;
    cout << "¬ведите второе число дл€ математических вычислений :"; cin >> b;
    cout << "„то вы хотите с ними сделать +(сложение) -(вычетание) *(умножение) /(деление) :"; cin >> c;

    Calculator qwe;
    result = qwe.calculation(a, b, c);
    cout << "–езультат математических вычеслений :" << result << endl;

    return 0;
}