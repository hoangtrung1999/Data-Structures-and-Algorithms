#include <iostream>
#include <vector>
using namespace std;

bool CheckCorners (vector<vector<char>> A, int i , int j , int m , int n)
{
	int bomb = 0;
	if (i == 0)
	{
		if (j == 0)
		{
			if (A[i][j+1] == '*' || A[i+1][j] == '*' || A[i+1][j+1] == '*')
				bomb++;
		}
		else if (j == m -1)
		{
			if (A[i][j-1] == '*' || A[i+1][j] == '*' || A[i+1][j-1] == '*')
				bomb++;
		}
	}
	else if ( i == n -1 )
	{
		if (j == 0)
		{
			if (A[i-1][j] == '*' || A[i][j+1] == '*' || A[i-1][j+1] == '*')
				bomb++;
		}
		else if (j == m -1)
		{
			if (A[i-1][j] == '*' || A[i-1][j-1] == '*' || A[i][j-1] == '*')
				bomb++;
		}
	}
	if (bomb == A[i][j])
		return true;
	return false;
}

int main()
{
	int n;
	int m;
	cin>>n>>m;
	vector<vector<char>> A;
	char temp;
	for (int i = 0 ; i < n ; i++)
	{
		vector<char> row;
		for (int j = 0 ; j < m ; j++)
			{
				cin>>temp;
				row.push_back(temp);
			}
		A.push_back(row);
	}
	for (int i = 0 ; i < n ; i++)
	{
		for (int j = 0 ; j < m ; j++)
		{
			if ( (i == 0 && j == 0) || (i == 0 && j == m -1) || (i == n -1 && j == 0) || (i == n - 1 && j == m -1))
				cout<<CheckCorners(A,i,j,m,n)<<endl;
		}
	}
	return 0;
}