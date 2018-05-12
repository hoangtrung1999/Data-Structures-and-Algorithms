#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a;
	int b;
	int result = 0;
	int max = 0;
	for (int i = 0 ; i < n ; i++)
	{
		cin>>a;
		cin>>b;
		result -= a;
		result += b;
		if (result > max)
			max = result;
	}
	cout<< max;
	return 0;
}