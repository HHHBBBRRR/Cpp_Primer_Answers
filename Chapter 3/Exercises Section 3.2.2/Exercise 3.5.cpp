#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::getline;

//没空格的
int main()
{
	string s, sum;

	while (cin>>s)
	{
		sum += s;
	}

	cout << sum << endl;

	return 0;
}

//有空格的
int main()
{
	string s, sum;

	while (cin >> s)
	{
		sum += s;
		sum += " ";
	}

	cout << sum << endl;

	return 0;
}
