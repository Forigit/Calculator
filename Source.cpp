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

    cout << "������� ������ ����� ��� �������������� ���������� :"; cin >> a;
    cout << "������� ������ ����� ��� �������������� ���������� :"; cin >> b;
    cout << "��� �� ������ � ���� ������� +(��������) -(���������) *(���������) /(�������) :"; cin >> c;

    Calculator qwe;
    result = qwe.calculation(a, b, c);
    cout << "��������� �������������� ���������� :" << result << endl;

    return 0;
}