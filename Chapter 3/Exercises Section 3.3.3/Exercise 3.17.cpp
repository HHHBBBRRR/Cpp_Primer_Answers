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
	string word;
	vector<string> v;

	while (cin >> word)
	{
		v.push_back(word);
	}
	for (decltype(v.size()) i = 0; i != v.size(); i++)
	{
		string word = v[i];

		for (auto& c : word)
		{
			if (islower(c))
			{
				c = toupper(c);
			}
		}

		v[i] = word;
		cout << v[i] << endl;
	}

	return 0;
}
