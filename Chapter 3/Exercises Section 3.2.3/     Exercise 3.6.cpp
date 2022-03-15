#include<iostream>
#include<string>
#include<cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::getline;

int main()
{
	string s;

	while (cin >> s)
	{
		for (auto& c : s)
		{
			c = 'X';
		}
	}

	cout << s << endl;

	return 0;
}
