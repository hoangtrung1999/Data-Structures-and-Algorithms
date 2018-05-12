#include <iostream>
#include <string>
using namespace std;

int Test (string s , string s1)
{
	for (int i = 0 ; i < s.size() ; i++)
		{
			if (s[i] < s1[i])
				return -1;
			else if (s[i] > s1[i])
				return 1;
		}
	return 0;
}

int main()
{
	string s;
	string s1;
	bool flag = false;
	getline(cin,s);
	getline(cin,s1);
	for (int i = 0 ; i < s.size() ; i++)
	{
		s[i] = tolower(s[i]);
		s1[i] = tolower(s1[i]);
	}
	cout<<Test(s,s1);
	return 0;
}