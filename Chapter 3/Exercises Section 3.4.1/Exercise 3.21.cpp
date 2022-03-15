#include<iostream>
#include<vector>
#include<string>
#include<cctype>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

//use (c) as an example
int main()
{
	vector<int> v3(10, 42);

	cout << v3.size() << endl;
	for (auto i = v3.begin(); i != v3.end(); i++)
	{
		cout << *i << ' ';
	}
	cout << endl;

	return 0;
}
