#include<iostream>
using namespace std;

int main()
{
	const int n = 64;
	int x = 4;
	int y = 2;
	int M[n][n];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < i; ++j)
			M[i][j] = y;
		M[i][i] = x;
		for (int j = i + 1; j < n; ++j)
			M[i][j] = y;
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
			cout << M[i][j];
		cout << endl;
	}
	return 0;
}