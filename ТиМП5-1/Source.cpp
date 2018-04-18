#include<iostream>
#include<deque>

using namespace std;

int main()
{
	// ������� ������-��������� � ������������ � ��������� ������� �
	// ��������� ��� �������, ��� ������� ������������ ��������� �������

	deque<long> md = { 5, 14, -20, 150, -89, 115, 87, 630, -875, 1000 };

	// ����������� ���������

	cout << "First container:\n";
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

	cout << "First container:\n";
	for (auto i = md.begin(); i != md.end(); ++i)
		cout << *i << " ";
	cout << endl;

	// ������� ������ ��������� ����� �� ������ � ��������� ��� ������� ���� �� ����, ��� � ������ ���������

	deque<long> md1 = { 15, 8, -210, -50, 115, 7785, 6548, -20330, -8, 1 };

	// �������� ������ ���������, ������ �� ���� n ��������� ����� ��������� � ������� ����� � ����
	// ��� �������� �� ������� ����������

	long x = 189;
	cout << "Deleting all elements after " << x << "...\n";
	while((!md.empty()) && (md.back() != x))
		md.pop_back();

	for (int i = 0; i <= md1.size() - 1; ++i)
		md.push_back(md1.at(i));

	// ����������� ������ � ������ ����������

	cout << "First container:\n";
	for (auto x : md)
		cout << x << " ";
	cout << endl;

	cout << "Second container:\n";
	for (auto x : md1)
		cout << x << " ";
	cout << endl;

	return 0;
}