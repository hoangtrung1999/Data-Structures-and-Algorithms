#include <iostream>
#include <string>
using namespace std;

int main()
{	
	string s;
	getline(cin,s);
	bool flag = true;
	int i;
	for (i = 0; i < s.size(); i++)
		if (s[i] == 'h')
			break;
	
}