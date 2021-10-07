# include <iostream>
#include <cmath>
#include <iomanip>
#include <algorithm>

using namespace std;
//����������� ������ ������ �� ��������� � ����� ���� ���� � ��� ����� �� ����������� �� �� �������� 20,
//���� ���� ���������� ������� ��� ��������� ������������ ��� ���� � �� n �� ������������ 20,
//��� ���������� ��������� �� �, ���������� �������� �������� n

int main( )
{
	long double x, n; 

	cout << "Enter x value: ";
	cin >> x;
	do
	{
		cout << "\nEnter n value between 0 and 5: ";
		cin >> n;
	}
	while (n >= 5 || n < 0);

	int k = 0;
	long long counterFact = 1;
	long long sumCounterAndInputFact = 1;
	bool finish = false, success=false;
	long double sum = 0, add = 0;

	while (!finish)
	{
		std::cout << "Iteration " << k<<  " worked here. The current value of sum is: "<<sum << std::endl;
		if (k != 0)
		{
			counterFact *= k;
		}
		if ((n + k) != 0)
		{
			
			if (k == 0)
			{
				long long copy=n;
				while (copy > 0)
				{
					sumCounterAndInputFact *= (copy);
					copy--;
				}
			}
			else
			{
				sumCounterAndInputFact *= (n + k);
			}
		}
		add = pow(-1, k) * pow((x / 2), n + (2 * k)) / (counterFact * sumCounterAndInputFact);
		if (fabs(add) >= 1e-4 && n + k+1 <= 20)
		{
			sum += add;
		}
		else if (n + k + 1 > 20)
		{
			finish = true;
		}
		else
		{
			finish = true;
			success = true;
		}
		
		++k;
	}
	if (success == true)
	{
		cout << "\nThe sum is: " << sum<< endl;
	}
	else
	{
		cout << "\n The last iteration was: " << k-1
			<<".\n Value overflow occured. Please try to enter lesser value of x with the same n or try other values of x and n" << endl;
	}
	return 0;
}