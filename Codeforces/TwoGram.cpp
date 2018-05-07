#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin>>n;
	string S;
	cin>>S;
	string subS;
	string final;
	int result = 0;
	int prevresult = 0;

	for (int i = 0 ; i < n-1 ; i++)
	{
		subS.push_back(S[i]);
		subS.push_back(S[i+1]);
		for (int j = i ; j < n-1 ; j++)
		{
			if ((S[j] == subS[0] && S[j+1] == subS[1]))
					result++;
		}

		if (result > prevresult)
		{
			prevresult = result;
			final = subS;
		}
		result = 0;
		subS.clear();
	}
	cout<<final;
	return 0;
}