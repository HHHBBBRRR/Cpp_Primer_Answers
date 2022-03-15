#include<iostream>
#include<vector>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

//以(c)为例
int main()
{
	vector<int>v3(10, 42);

	cout << v3.size() << endl;
	for (auto n : v3)
	{
		cout << n << ' ';
	}
	cout << endl;

	return 0;
}
