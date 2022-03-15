#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> scores(11, 0);
	int grade;
	auto i = scores.begin();

	while (cin >> grade)
	{
		if (grade >= 0 && grade <= 100)
		{
			(*(i + grade / 10))++;
		}
	}

	for (auto beg = scores.begin(), end = scores.end(); beg != end; beg++)
	{
		cout << *beg << ' ';
	}
	cout << endl;

	return 0;
}
