#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

extern bool grow_vec(vector<int>& vec, int );

bool is_elem(vector<int>& vec, int elem)
{
	int max_value = max_element(vec.begin(), vec.end());
	if (max_value < elem)
		return grow_vec(vec, elem);
	if (max_value == elem)
		return true;
	return binary_search(vec.begin(), vec.end(), elem);
}

int main() {



	return 0;
}