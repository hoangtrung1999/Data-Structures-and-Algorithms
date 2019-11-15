#include <iostream>
#include <string>
using namespace std;

int main()
{
	string S;
	string S1;
	cin>>S1;
	int n;
	n = stoi(S1);
	for (int i = 1; i <= n ; i++)
		S += std::to_string(i);
	int pos = S.find(S1) + 1;
	cout<<pos<<endl;
	return 0;
}