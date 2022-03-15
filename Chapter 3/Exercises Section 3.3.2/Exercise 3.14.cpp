#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	int n;
	vector<int> v;

	while (cin>>n)
	{
		v.push_back(n);
	}

	return 0;
}
