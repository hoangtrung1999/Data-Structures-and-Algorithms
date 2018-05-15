#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int* Array = new int[n];
	int* Result = new int[n];
	int temp;
	int index = 0;
	for (int i = 0 ; i < n ; i++)
		cin>>Array[i];
	for (int i = n-1 ; i > -1 ; i--)
	{
		if (Array[i] > 0)
			{
				temp = Array[i];
				for (int j = i ; j > -1 ; j--)
					if (Array[j] == temp)
						Array[j] = 0;
				Result[index++] = temp;
			}
	}
	cout<<index<<endl;
	for (int i = index-1 ; i > -1 ; i--)
		cout<<Result[i]<<" "; 
	return 0;
}