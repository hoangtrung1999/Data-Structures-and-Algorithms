#include <iostream>
#include <string>
using namespace std;

int main()
{
	string S;
	string S0 = "0000000";
	string S1 = "1111111";
	getline(cin,S);
	size_t found0 = S.find(S0);
	size_t found1 = S.find(S1);
	if (found0 != string::npos || found1 != string::npos)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}