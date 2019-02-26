#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
	string DNA ="ACGTGTCT";
	vector<int> Nums(26, 0);
	for (size_t i = 0; i < DNA.size(); ++i)
		Nums[DNA[i] - 'A']++;
	cout << Nums['A' - 'A'];
	cout << Nums['C' - 'A'];
	cout << Nums['G' - 'A'];
	cout << Nums['T' - 'A'];
	return 0;
}