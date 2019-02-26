#include<iostream>
#include<set>
using namespace std;

int main()
{
	set<int> s = { 3,2,1,4,5 };
	s.insert(1);
	s.insert(7);
	auto iter = s.find(0);
	iter = s.find(5);
	if (iter != s.end())
		s.erase(iter);
	iter = s.begin();
	++iter;
	--iter;
	for (auto iter = s.begin(); iter != s.end(); ++iter)
		cout << *iter << endl;
	for (auto iter = s.crbegin(); iter != s.crend(); ++iter)
		cout << *iter << endl;
	for (const auto& x : s)
		cout << x;
	return 0;

}