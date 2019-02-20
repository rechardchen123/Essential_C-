#include<iostream>
#include<vector>
using namespace std;

//template <typename elemType>
//elemType* find(const elemType* array, int size, const elemType& value)
//{
//	if (!array || size < 1)
//		return 0;
//	for (int ix = 0; ix < size; ++ix)
//		if (array[ix] == value)
//			return &array[ix];
//	return 0;
//}

//template <typename elemType>
//elemType * find(const elemType * array, int size, const elemType & value)
//{
//	if (!array || size < 1)
//		return 0;
//	for (int ix = 0; ix < size; ++ix)
//		if (*array == value)
//			return array;
//	return 0;
//}
//
template <typename elemType>
elemType* find(const elemType *first, const elemType *last, const elemType& value)
{
	if (!first || !last)
		return 0;
	for (; first != last; ++first)
		if (*first == value)
			return first;
	return 0;
}

template <typename elemType>
inline elemType* begin(const vector<elemType>& vec)
{
	return vec.empty() ? 0 : &vec[0];
}

int main()
{
	int ia[8] = { 1,1,2,3,5,8,13,21 };
	double da[6] = { 1.5,2.0,2.5,3.0,3.5,4.0 };
	string sa[4] = { "pooh","piglet","eeyore","tigger" };

	int* pi = find(ia, ia + 8, ia[3]);
	cout << "the current value is: " << *pi << endl;
	double* pd = find(da, da + 6, da[3]);
	cout << "the current value is: " << *pd << endl;
	string* ps = find(sa, sa + 4, sa[3]);
	cout << "the current value is: " << *ps << endl;
	
	return 0;
}
