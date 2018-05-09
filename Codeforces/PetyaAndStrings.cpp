#include <iostream>
#include <exception>
#include <string>
using namespace std;

int main()
{
	string S1;
	string S2;
	int n;
	cin>>n;
	try
	{
		if (n < 10)
			throw 2;
	}
	catch(...)
	{
		cout<<"OK";
	}
	return 0;
}