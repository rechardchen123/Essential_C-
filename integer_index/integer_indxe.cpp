#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	//方法一
	vector<int>scores = { 6,8,9,10,20,32,45,55,100,89,78,56,63,72,89,66,78,85,87,93,96 };
	vector<int> Nums(10, 0);
	for (size_t i = 0; i < scores.size(); ++i)
		if (scores[i] < 10)
			Nums[0]++;
		else if (scores[i] < 20)
			Nums[1]++;
		else if (scores[i] < 30)
			Nums[2]++;
		else if (scores[i] < 40)
			Nums[3]++;
		else if (scores[i] < 50)
			Nums[4]++;
		else if (scores[i] < 60)
			Nums[5]++;
		else if (scores[i] < 70)
			Nums[6]++;
		else if (scores[i] < 80)
			Nums[7]++;
		else if (scores[i] < 90)
			Nums[8]++;
		else
			Nums[9]++;

	//method 2
	vector<int> Nums1(11, 0);
	for (size_t i = 0; i < scores.size(); ++i)
		Nums1[scores[i] / 10]++;
	Nums1[9] += Nums[10];
	Nums.pop_back();

	return 0;
}