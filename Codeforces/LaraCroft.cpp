#include <iostream>
using namespace std;

int main()
{
	int n;
	int m;
	long long int k;
	int row = 1;
	int column = 1;

	cin>>n>>m>>k;
	if (k == 0)
	{
		row = 1;
		column = 1;
	}
	else if (k == m*n - 1)
	{
		row = 1;
		column = 2;
	}
	else
	{
		if (k <= n - 1)
		{
			row += k;
		}
		else
		{
			k -= n -1;
			row = n;
			
		}
	}
	cout<<row<<" "<<column;
	return 0;
}