#include<iostream>
#include<deque>

using namespace std;

int main()
{
	// —оздать объект-контейнер в соответствии с вариантом задани€ и
	// заполнить его данными, тип которых определ€етс€ вариантом задани€

	deque<long> md = { 5, 14, -20, 150, -89, 115, 87, 630, -875, 1000 };

	// ѕросмотреть контейнер

	cout << "First container:\n";
	for (auto x : md)
		cout << x << " ";
	cout << endl;

	// »зменить контейнер, удалив из него одни элементы и заменив другие

	int sz = md.size();
	for (int i = 1; i <= sz; ++i)
	{
		md.push_front(100 - md.back());
		md.pop_back();
	}

	// ѕросмотреть контейнер, использу€ дл€ доступа к его элементам итераторы

	cout << "First container:\n";
	for (auto i = md.begin(); i != md.end(); ++i)
		cout << *i << " ";
	cout << endl;

	// —оздать второй контейнер этого же класса и заполнить его данными того же типа, что и первый контейнер

	deque<long> md1 = { 15, 8, -210, -50, 115, 7785, 6548, -20330, -8, 1 };

	// »зменить первый контейнер, удалив из него n элементов после заданного и добавив затем в него
	// все элементы из второго контейнера

	long x = 189;
	cout << "Deleting all elements after " << x << "...\n";
	while((!md.empty()) && (md.back() != x))
		md.pop_back();

	for (int i = 0; i <= md1.size() - 1; ++i)
		md.push_back(md1.at(i));

	// ѕросмотреть первый и второй контейнеры

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