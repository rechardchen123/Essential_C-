#include<iostream>
#include<deque>
using namespace std;

int main()
{
	int ia[8] = { 1,1,2,3,5,8,13,21 };
	deque<int> a_line(ia, ia+8);
	int ival=12;
	for (auto i = a_line.begin(); i != a_line.end(); ++i)
		cout << *i << " ";
	cout << endl;
	//insert ival to the end of a_line
	a_line.push_back(ival);
	//output the deque
	for (auto j = a_line.begin(); j != a_line.end(); ++j)
		cout << *j << ' ';
	cout << endl;
	// read the front element
	int curr_value = a_line.front();
	for (auto k = a_line.begin(); k != a_line.end(); ++k)
		cout << *k << ' ';
	a_line.pop_front();
	return 0;
}