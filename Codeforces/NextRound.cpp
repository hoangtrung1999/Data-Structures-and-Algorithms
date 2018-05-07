#include <iostream>
using namespace std;

int main()
{
	int n;
	int k;
	int Array[100];
	bool flag = false;
	cin>>n;
	cin>>k;
	k--;
	for (int i = 0 ; i < n ; i++)
		cin>>Array[i];
	int result = 0;
	for (int i = 0 ; i < n ; i++)
		{
			if (Array[i] != 0)
				flag = true;
			if (Array[i] >= Array[k] && Array[i] > 0)
				result++;
		}
	if (flag == false)
		cout<<"0";
	else
		cout<<result;	
	return 0;
}