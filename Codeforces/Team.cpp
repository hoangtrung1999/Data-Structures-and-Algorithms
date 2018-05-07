#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int result = 0;
	int flag;
	int temp;
	for(int i = 0 ; i < n ; i++) // The number of test cases
	{
		flag = 0;
		for (int i = 0 ; i < 3 ; i++) // There is 3 members of a team
		{
			cin>>temp;
			if (temp == 1)
				flag++;
		}
		if (flag > 1)
			result++;
	}
	cout<<result;
	return 0;
}