#include <iostream>
using namespace std;
void cyclep1(int cp1);
void cyclep2(int cp2);
void cyclep3(int cp3);
void gate1(int gat1) {
	int back;
	cout << "___________________________________________\n�������� ����� �� ������...��� �� ��� ����� �� ���������������, �� ����� �������...\n���� 1" << endl;
	cin >> back;
	if (back == 1)
		cyclep1(1);
}
void gate2(int gat2) {
	int back;
	cout << "___________________________________________\n�� ����������� ����� ��� �����������...�������� ����������\n���� 1" << endl;
	cin >> back;
	if (back == 1)
		cyclep2(1);
}
void gate3(int gat3) {
	int back;
	cout << "___________________________________________\n�� ��������� ������������ � ������� �������� �� �����...����� �� ���������, � ��� ���� ���� ������ ��������\n���� 1" << endl;
	cin >> back;
	if (back == 1)
		cyclep3(1);
}