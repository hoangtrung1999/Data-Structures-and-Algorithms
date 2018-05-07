#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	string S;
	cin>>n;
	getchar();
	for (int i = 0 ; i < n ; i++)
	{
		getline(cin,S);
		if (S.size() > 10)
			cout<<S[0]<<S.size()-2<<S[S.size()-1]<<endl;
		else
			cout<<S<<endl;
	}
	return 0;
}