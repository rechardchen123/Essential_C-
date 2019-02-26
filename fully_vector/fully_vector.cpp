#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
	//向量赋值
	/*vector<int> A(10);
	for (size_t i = 0; i < A.size(); ++i)
		A[i] = static_cast<int>(i);
	for (auto iter = A.begin(); iter != A.end(); ++iter)
		* iter = 1;*/

	vector<int>B(5, 3);
	B.resize(B.size() + 100);//改变向量的长度
	B.resize(B.size() + 100, 2);//新增加的向量的元素赋值为2
	B.push_back(4);//一般push_back效率没有resize的效率高
	auto iter = B.begin();
	for (size_t i = 0; i < B.size(); ++i)
		* (iter + i) *= 2;//迭代器将所有的数值改为2
	while (!B.empty())
	{
		cout << *B.end() << endl;
		B.pop_back();
	}
	//接受数据
	vector<int>C;
	int data;
	for (cin >> data; data >= 0; cin >> data)
		C.push_back(data);
	for (const auto& x : C)
		cout << x << endl;

	return 0;

}