#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;
int main( )
{
	// �������� ��� �����������
	cout << "Enter the number you want to get the digit root from: ";
	int number;
	cin >> number;

	// ���� ��� ������ �� ������������ ����� �� ������ ��� ��������� ������ ��������
	if (number < 0) number *= (-1);

	// ���������� ���� �� ������ ����������������� ��� ���������� ������
	int copy, counter, sum;
	
	// ��� ������� ��������� ����� �� ����������� ����� �� � ������ �������
	while (number >= 10)
	{
		// ������� �������� ��������  ����� ��� ������ ���������� ���� ���������� ���������
		copy = number;
		counter = 0;
		sum = 0;

		// ���������� ������� ���� � ��������� number
		while (abs(copy) >= 1)
		{
			copy /= 10;
			++counter;
		}

		// ��������� ���� ��� ����� � ��������� number
		for (int i = pow(10, counter - 1); i >= 1; i /= 10)
		{
			int add = static_cast<int>(number / i);
			sum += add;
			number -= (add * i);
		}

		// �������� �������� ���� � number
		number = sum;
	}

	// ���� ����������
	cout << "The digit root of the entered value is: "<< number<< '\n';

	return 1;
}