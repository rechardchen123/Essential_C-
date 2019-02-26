#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int key;
	vector<int>sv = { 1,3,6,6,8,9 };
	key = 0;
	auto iter_sv = lower_bound(sv.begin(), sv.end(), key);
	sv.insert(iter_sv, key);
	//delete
	key = 6;
	iter_sv = upper_bound(sv.begin(), sv.end(), key);
	--iter_sv;
	sv.erase(iter_sv);

	//no sequence vector
	vector<int> usv = { 9,6,1,3,8,6 };
	key = 0;
	usv.push_back(key);
	key = 6;
	auto iter_usv = find(usv.begin(), usv.end(), key);
	*iter_usv = usv.back();
	usv.pop_back();
	return 0;

}