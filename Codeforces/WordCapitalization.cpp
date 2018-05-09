#include <iostream>
#include <string>
#include <locale>
using namespace std;
int main()
{
	string S;
	getline(cin,S);
	S[0] = toupper(S[0]);
	cout<<S;
	return 0;
}