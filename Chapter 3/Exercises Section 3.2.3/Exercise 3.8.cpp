#include<iostream>
#include<string>
#include<cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::getline;

//for
int main()
{
	string s;

	while (cin >> s)
	{
		for (decltype(s.size()) i = 0; i != s.size(); i++)
		{
			s[i] = 'X';
		}
	}
		
	cout << s << endl;

	return 0;
}

//while
int main()
{
	string s;
	decltype(s.size()) i = 0;

	while (cin >> s)
	{
		while (i!=s.size())
		{
			s[i] = 'X';
			i++;
		}
	}

	cout << s << endl;

	return 0;
}
