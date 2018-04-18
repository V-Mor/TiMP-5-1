#include<iostream>
#include<deque>

using namespace std;

int main()
{
	// Создать объект-контейнер в соответствии с вариантом задания и
	// заполнить его данными, тип которых определяется вариантом задания

	deque<long> md = { 5, 14, -20, 150, -89, 115, 87, 630, -875, 1000 };

	// Просмотреть контейнер

	for (auto x : md)
		cout << x << " ";
	cout << endl;

	// Изменить контейнер, удалив из него одни элементы и заменив другие

	int sz = md.size();
	for (int i = 1; i <= sz; ++i)
	{
		md.push_front(100 - md.back());
		md.pop_back();
	}

	// Просмотреть контейнер, используя для доступа к его элементам итераторы

	for (auto i = md.begin(); i != md.end(); ++i)
		cout << *i << " ";
	cout << endl;

	return 0;
}