#include <iostream>
#include <cmath>


int main( )
{
	//������� ����������� ������ �������� ��� �� ������� ��, ��������� � �����
	std::cout << "Enter time period in minutes: " << std::endl; 
	int minutesInput;
	std::cin >> minutesInput;

	//���������� ������� ����� � ��������� ������������ ����
	int minutes = minutesInput % 60;
	int hours = (minutesInput-minutes) / 60;

	//�������� ����������� ����� �������� � ������� � �������� �� �����
	std::cout << "Your time period is " << hours << " hours, " << minutes << " minutes." << std::endl;

	//��������� ��� �������� ��������� �������� ����� � �������
	return 1;
}