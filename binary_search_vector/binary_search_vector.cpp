#include<iostream>
#include<vector>
using namespace std;

template <typename T>
bool binary_search_vector(const T& key, typename vector<T>::const_iterator data, size_t N)
{
	size_t low = 0;
	size_t high = N;
	while (low < high)
	{
		size_t mid = low + (high - low) / 2;
		if (key < *(data + mid))
			high = mid;
		else if (*(data + mid) < key)
			low = mid + 1;
		else
			return true;
	}
	return false;
}
int main()
{
	vector<int> v = { 1,2,3,4,5 };
	cout << binary_search_vector(2, v.begin(), 5);
	return 0;
}