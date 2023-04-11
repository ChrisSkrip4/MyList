#include <iostream>
#include "List.h"

using namespace std;

int main()
{
	List<int> l1 { 1,2,3 };
	List<int> l2{ 4, 5 };

	
	cout << "list 1: " << endl;
	cout << "l size = " << l1.size() << endl;

	for (auto x = l1.begin(); x != nullptr; x = x->m_next) {
		cout << x->m_value << " ";
	} cout << endl;


	l1 = { 6, 7, 8, 9 };

	cout << "list l1 new: " << endl;
	for (auto x = l1.begin(); x != nullptr; x = x->m_next) {
		cout << x->m_value << " ";
	} cout << endl;

	return 0;
}

