#include "Func.h"

/*�������� ��������� ����. ���������� �� ������ ����� �� ���������� ��������� �����
�������� � ��� ������ 0 �� 1 � �������. ������� ���� ��������� � ���������� �����*/
int main( )
{
	string path = "C:/Users/User/source/repos/KPI/OP/2Semester/Lab1/Files/";
	string firstName = "first_file.txt";
	string secondName = "second_file.txt";
	rewriteFile(path+firstName);
	invertBinaryDigits(path + firstName, path + secondName);
	printFile(path+firstName);
	printFile(path + secondName);

	return 0;
}
