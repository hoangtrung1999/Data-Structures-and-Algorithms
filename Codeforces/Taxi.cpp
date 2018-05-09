#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int temp;
	int Array[100000];
	int result = 0;
	int peopleInTaxi;

	for (int i = 0 ; i < n ; i++)
		cin>>Array[i];
	for (int i = 0 ; i < n - 1 ; i++)
		for (int j = i + 1 ; j < n ; j++)
			if (Array[j] < Array[i])
			{
				temp = Array[j];
				Array[j] = Array[i];
				Array[i] = temp;
			}
	for (int i = 0 ; i < n ; i++)
	{
		if (Array[i] != -1)
		{
			peopleInTaxi = Array[i];
			if (peopleInTaxi == 4)
			{
				Array[i] = -1;
				result++;
			}
			else
			{
				int j;
				for (j = n - 1 ; j > 0 ; j--)
				{
					if (peopleInTaxi + Array[j] <= 4 && Array[j] != -1)
					{
						peopleInTaxi += Array[j];
						Array[j] = -1;
					}
				}
				result++;
				Array[i] = -1;
			}
		}
	}
	cout<<result;
	return 0;
}