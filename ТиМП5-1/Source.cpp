#include<iostream>
#include<deque>

using namespace std;

int main()
{
	// ������� ������-��������� � ������������ � ��������� ������� �
	// ��������� ��� �������, ��� ������� ������������ ��������� �������

	deque<long> md = { 5, 14, -20, 150, -89, 115, 87, 630, -875, 1000 };

	// ����������� ���������

	for (auto x : md)
		cout << x << " ";
	cout << endl;

	// �������� ���������, ������ �� ���� ���� �������� � ������� ������

	int sz = md.size();
	for (int i = 1; i <= sz; ++i)
	{
		md.push_front(100 - md.back());
		md.pop_back();
	}

	// ����������� ���������, ��������� ��� ������� � ��� ��������� ���������

	for (auto i = md.begin(); i != md.end(); ++i)
		cout << *i << " ";
	cout << endl;

	return 0;
}