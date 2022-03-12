#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::getline;

//输出较大的字符串
int main()
{
	string s1, s2;

	while (cin >> s1 >> s2)
	{
		if (s1 == s2)
		{
			cout << "Equal" << endl;
		}
		else
		{
			cout << "Not Equal" << endl;
			if (s1 > s2)
			{
				cout << s1 << endl;
			}
			else
			{
				cout << s2 << endl;
			}
		}
	}

	return 0;
}

//输出较长的字符串
int main()
{
	string s1, s2;

	while (cin >> s1 >> s2)
	{
		if (s1.size() == s2.size())
		{
			cout << "Equal" << endl;
		}
		else
		{
			cout << "Not Equal" << endl;
			if (s1.size() > s2.size())
			{
				cout << s1 << endl;
			}
			else
			{
				cout << s2 << endl;
			}
		}
	}

	return 0;
}
