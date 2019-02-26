#include<iostream>
using namespace std;
template<typename T>
int binary_search(const T& key, const T data[], int N)
{
	if (N < 0)
		return -1;
	int low = 0;
	int high = N - 1;
	while (low <= high)
	{
		int mid = low + (high - low) / 2;
		if (key < data[mid])
			high = mid - 1;
		else if (data[mid] < key)
			low = mid + 1;
		else
			return mid;
	}
	return -1;
}

int main()
{
	int a[5] = {1,2,3,4,5,};
	cout << binary_search(2, a, 5) << endl;
	cout << binary_search(3, a, 5) << endl;
	cout << binary_search(6, a, 5) << endl;
	return 0;
}
