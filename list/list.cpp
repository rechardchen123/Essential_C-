#include<iostream>
#include<list>
#include<algorithm>
#include <forward_list> //单向链表必须包含这个头文件
using namespace std;
int main()
{
	////forward_list
	//forward_list<int> A = { 1,2,3 };
	//auto iter = A.begin();
	//cout << *iter << endl;
	//++iter;
	//cout << *iter;
	////list
	//list<int> B = { 1,2,3 };
	//auto iter1 = B.begin();
	//++iter1;
	//--iter1;
	//cout << *iter1 << endl;
	//list operator 
	list<int> L = { -2,-1,1,2 };
	auto iter3 = L.begin();
	while (iter3 != L.end() && *iter3 < 0)
		++iter3;
	L.insert(iter3, 0);
	cout << *iter3 << endl;
	//delete operator
	auto iter4 = L.begin();
	while (iter4 != L.end())
		if (*iter4 > 0)
			iter4 = L.erase(iter4);
		else
			++iter4;
	cout << *iter4 << endl;
	return 0;
}