#include <iostream>
#include <string>
using namespace std;
int main()
{
	string user_name;
	string first_name;
	cout << "Please enter your first name: ";
	cin >> user_name;
	cout << "please enter your family name: ";
	cin >> first_name;
	cout << "\n";
	cout << "hello, ";
	cout << user_name<< first_name<<endl;
	cout << "... and goodbye!\n";

	return 0;
}
