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
	vector<string> text;
	text.push_back("Hello");
	text.push_back("Hi");
	text.push_back("");
	text.push_back("See you");

	for (auto i = text.begin(); i != text.end() && !i->empty(); i++)
	{
		string s = *i;
		for (auto& c : s)
		{
			c = toupper(c);
		}
		*i = s;
		cout << *i << endl;
	}

	return 0;
}
