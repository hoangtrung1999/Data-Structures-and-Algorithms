#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin>>n;
	getchar();
	string S;
	char c;
	int result = 0;
	getline(cin,S);

	for (int i = 0 ; i < S.size() -1 ; i++)
	{
		if (S[i] != '1')
		{
			c = S[i];
			for (int j = i+1 ; j < S.size() ; j++)
			{
				if (c == S[j] && S[j] != '1')
				{
					S[j] = '1';
					result++;
				}
				else
					break;
			}
				
			S[i] = '1';
		}
	}
	cout<<result;
	return 0;
}