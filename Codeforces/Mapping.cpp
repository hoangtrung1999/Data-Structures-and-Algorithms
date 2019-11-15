#include <iostream>
using namespace std;

int main()
{
	int m;
	int n;
	cin>>n>>m;
	char** A = new char*[n];

	for (int i = 0 ; i < n ; i++)
		A[i] = new char[m];

	for (int i = 0 ; i < n ; i++)
		for (int j = 0 ; j < m ; j++)
			cin>>A[i][j];

	for (int i = 0 ; i < n ; i++)
		for (int j = 0 ; j < m ; j++)
		{
			
		}

	return 0;
}