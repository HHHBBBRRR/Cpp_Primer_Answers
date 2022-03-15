#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

//Print the sum of each pair of adjacent elements
int main()
{
	int n;
	vector<int> v;

	while (cin >> n)
	{
		v.push_back(n);
	}

	for (auto beg = v.begin(), end = v.end(); beg != end - 1; beg++)
	{
		cout << *(beg)+*(beg + 1) << ' ';
	}
	cout << endl;

	return 0;
}

//Print the sum of the first and last elements
int main()
{
	int n;
	vector<int> v;

	while (cin >> n)
	{
		v.push_back(n);
	}

	for (auto beg = v.begin(), end = v.end() - 1;
		beg <= end;
		beg++, end--)
	{
		cout << *(beg)+*(end) << ' ';
	}
	cout << endl;

	return 0;
}
