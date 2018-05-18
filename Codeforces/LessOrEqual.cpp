#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int k;
	cin>>k;
	int* Array = new int [n];
	int ans;
	for (int i = 0 ; i < n ; i++)
		cin>>Array[i];
	sort (Array,Array + n);
	if ( k == 0 )
	{
		ans = Array[0]-1;
	}
	else
		ans = Array[k-1];
	int count = 0;
	for (int i = 0; Array[i] <= ans && i < n ; i++)
		count++;
	if (ans < 1 || count != k)
		ans = -1;
	cout<<ans;
	return 0;
}