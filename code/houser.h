#include <iostream>
using namespace std;
void cyclep1(int cp1);
void cyclep2(int cp2);
void cyclep3(int cp3);
void house1(int hou1) {
	int ret;
	cout << "___________________________________________\n���������� �� �������� �� ��������� ��������� �� ������� ��, ��� ���� � ����� ��������� �������...\n�������� ����� 1; ���� 2" << endl;
	cin >> ret;
	if (ret == 1) {
		cout << "___________________________________________\n������ �������?!. ��� � ������ ������ ����� ������?.." << endl;
		cyclep1(1);
	}
	if (ret == 2)
		cyclep1(1);
}
void house2(int hou2) {
	int ret;
	cout << "___________________________________________\n���������� �� �������� �� ��������� ��������� �� ������� ��, ��� ���� � ����� ��������� �������...\n�������� ����� 1; ���� 2" << endl;
	cin >> ret;
	if (ret == 1) {
		cout << "___________________________________________\n������� ����� � ����� ������ �� ������� ��������� ����...\n�� ����� �������" << endl;
		cyclep3(1);
	}
	if (ret == 2)
		cyclep2(1);
}
void house3(int hou3) {
	cout << "___________________________________________\n��� ��� ������ �����������...� �� ���� ���� �����������" << endl;
	cyclep3(1);
}