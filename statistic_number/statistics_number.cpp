#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main()
{
	set<int> s = { 3,2,1,4,5 };
	int k;
	cin >> k;
	if (k <= 0 || k < s.size())
		cout << "over the scope." << endl;
	else
	{
		//first method
	/*	auto iter = s.begin();
		for (int i = 0; i < k - 1; ++i)
			++iter;
		cout << *iter << endl;*/
		//second method
		vector <int> v;
		v.reserve(k-1);
		for (int i = 0; i < k - 1; ++i)
		{
			v.push_back(*s.begin());
			s.erase(s.begin());
		}
		//cout << *iter << endl;
		for (size_t i = 0; i < v.size(); ++i)
			s.insert(v[i]);
	}
	return 0;
}