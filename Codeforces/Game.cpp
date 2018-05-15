#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int Array[1000];
	for (int i = 0 ; i < n ; i++)
		cin>>Array[i];
	if ( n == 1)
		cout<<Array[0];
	else
	{
	sort (Array, Array + n);
	int index = 0;
	int limit = n - 1;
/*	for (int i = 0 ; i < n ; i++)
		cout<<Array[i]<<endl;*/
	for (int i = 0 ; i < limit ; i++)
	{
		if ( i & 1 )
		{
			index++;
/*			cout<<"Second Player"<<endl;
			for (int j = index ; j < n ; j++)
				cout<<Array[j]<<" ";
			cout<<endl;*/
		}
		else
		{
			n--;
/*			cout<<"First Player"<<endl;
			for (int j = index ; j < n ; j++)
				cout<<Array[j]<<" ";
			cout<<endl;*/
		}
	}
	cout<<Array[index];
	}

	return 0;
}