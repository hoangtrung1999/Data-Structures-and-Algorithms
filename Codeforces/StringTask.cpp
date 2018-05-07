#include <iostream>
#include <string>
using namespace std;



int main()
{
	string S;
	string S2;
	cin>>S;
	for (unsigned int i = 0 ; i < S.size() ; i++)
		if ((int) S[i] > 64 && (int)S[i] < 91)
			S[i] = char ((int)S[i] + 32);
	for (unsigned int i = 0 ; i < S.size() ;)
		if (S[i] == 'a' || S[i] == 'o' || S[i] == 'e' || S[i] == 'u' 
			|| S[i] == 'i' || S[i] == 'y')
			{
				S.erase(i,1);
				i = 0;
			}
		else
			i++;
	for (unsigned int i = 0 ; i < S.size() ; i++)
	{
		S2.push_back('.');
		S2.push_back(S[i]);
	}
	cout<<S2;
	return 0;
}