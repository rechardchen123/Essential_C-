#include<iostream>
#include<vector>
using namespace std;

size_t iterator_Collatz(size_t n)
{
	if (n < 1)
		return 0;
	size_t L = 1;
	while (n != 1)
	{
		n = (n % 2 == 0) ? n / 2 : 3 * n + 1;
		++L;
	}
	return L;
}

size_t memorized_Collatz(vector<size_t>& v, size_t n)
{
	size_t D = 0;
	while (n >= v.size())
	{
		n = (n % 2 == 0) ? n / 2 : 3 * n + 1;
		++D;
	}
	if (v[n] == 0 && n > 0)
		v[n] = memorized_Collatz(v, (n % 2 == 0) ? n / 2 : 3 * n + 1) + 1;
	return v[n] + D;
}

int main()
{
	//如果n不在向量v的下标范围之内，先转换到合理的范围内
	const size_t m = 100000;
	vector<size_t> v(m, 0);
	v[1] = 1;
	size_t max = 100000;
	bool equal = true;
	for (size_t n = 1; n <= max; ++n)
		if (iterator_Collatz(n) != memorized_Collatz(v, n))
			equal = false;
	cout << (equal ? "相符" : "不符") << endl;
	return 0;
}