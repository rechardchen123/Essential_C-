#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

template <typename T>
void display(const T data[], int N)
{
	for (int i = 0; i < N; ++i)
		cout << data[i] << " ";
	cout << endl;
}

int main()
{
	const int N = 5;
	int a[N] = { 2,5,3,1,4 };
	sort(a, a + N);
	display(a, N);
	sort(a, a + N, greater<int>());//使用greater 函数对象，对数组按照由大到小的顺序排序，默认的sort是从小到大
	display(a, N);
	string b[N] = { "www","algorithm","racer","waiter","text"};
	sort(b, b + N);
	display(b, N);
	sort(b, b + N, greater<string>());
	display(b, N);

	vector<string> v = { "www","algorithm","racer","waiter","text" };
	sort(v.begin(), v.end());
	for (auto iter = v.begin(); iter != v.end(); ++iter)
		cout << *iter << " ";
	cout << endl;
	sort(v.begin(), v.end(), greater<string>());
	for (auto iter = v.begin(); iter != v.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	sort(v.rbegin(), v.rend());//vector的逆向排序
	for (const string& x : v)
		cout << x << endl;
	cout << endl;
	return 0;

}