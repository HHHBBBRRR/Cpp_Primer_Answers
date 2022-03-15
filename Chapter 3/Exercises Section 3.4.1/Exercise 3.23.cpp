#include<iostream>
#include<vector>
#include<string>
#include<cctype>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
	vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	for (auto i = v.begin(); i != v.end(); i++)
	{
		(*i) = (*i) * 2;
		cout << *i << ' ';
	}
	cout << endl;
	return 0;
}
