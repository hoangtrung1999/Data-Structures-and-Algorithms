#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	getline(cin,s);
	int links = 0;
	int peals = 0;
	for (int i = 0 ; i < s.size() ; i++)
	{
		if (s[i] == '-')
			links++;
		else
			peals++;
	}

	if (peals <= 1)
		cout<<"YES";
	else if (links % peals == 0)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}