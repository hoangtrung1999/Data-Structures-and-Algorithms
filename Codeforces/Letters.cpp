#include <iostream>
using namespace std;

int main()
{
	long long int n;
	long long int m;
	cin>>n>>m;
	long long int* Rooms = new long long int[n];
	long long int* Number = new long long int[n];

	long long int temp = 0;
	long long int letters = 0;
	int dor;

	for (int i = 0 ; i < n ; i++)
	{
		cin>>Rooms[i];
		temp += Rooms[i];
		Number[i] = temp;
	}

	for (int i = 0 ; i < m ; i++)
	{
		cin>>letters;
		dor = 0;
		for (int j = 0 ; j < n ; j++)
			if (letters <= Number[j])
			{
				dor = j+1;
				break;
			}
		if (dor > 1)
			cout<<dor<<" "<<letters - Number[dor-2]<<endl;
		else
			cout<<dor<<" "<<letters<<endl;
	}

	return 0;
}