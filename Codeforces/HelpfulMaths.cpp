#include <iostream>
#include <string>
using namespace std;

int main()
{
	string S;
	string result;
	int temp;

	getline(cin,S);
	for (int i = 0 ; i < S.size() ; i++)
		if (S[i] != '+')
			result.push_back(S[i]);

	for (int i = 0 ; i < result.size() - 1 ; i++)
		for (int j = i+1; j < result.size() ; j++)
			if (result[j] < result[i])
			{
				temp = result[j];
				result[j] = result[i];
				result[i] = temp;
			}

	for (int i = 0 ; i < result.size() ; i++)
	{
		cout<<result[i];
		if (i != result.size() - 1)
			cout<<"+";
	}
	return 0;
}