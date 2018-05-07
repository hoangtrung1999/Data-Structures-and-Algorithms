#include <iostream>
#include <string>
using namespace std;

int main()
{
	int result = 0;
	string S;
	int n;
	cin>>n;
	getchar();
	for (int i = 0 ; i < n ; i++)
	{
		getline(cin,S);
		if (S[1] == '+')
			result++;
		else
			result--;
	}
	cout<<result;
	return 0;
}