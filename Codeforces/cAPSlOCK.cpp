#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	getline(cin,s);
	bool flag = false;
	
	for (int i = 1 ; i < s.size() ; i++) // remain
		if (!isupper(s[i]))
		{
			cout<<s;
			return 0;
		}
	int j ;
	if (isupper(s[0]))
		s[0] = tolower(s[0]);
	else
		s[0] = toupper(s[0]);
	for (j = 1; j < s.size() ; j++)
		s[j] = tolower(s[j]);
	cout<<s;
	return 0;
}