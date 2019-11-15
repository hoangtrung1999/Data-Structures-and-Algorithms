#include <iostream>
using namespace std;

void display (int* a, int n)
{
	for (int i = 0 ; i < n ; i++)
		cout<<a[i];
	cout<<endl;
}

void next (int* a, int n, bool& check)
{
	int i = n;
	while (a[i] == 1 && i > 0)
		i--;

	if (i == 0 && a[i] == 1)
		check = false;

	else
	{
		a[i] = 1;
		for (int j = i + 1 ; j < n ; j++)
			a[j] = 0;
		display(a,n);
	}
	
}

int main()
{
	int n;
	cin>>n;
	bool check = true;

	int* a = new int[n];

	for (int i = 0 ; i < n ; i++)
		a[i] = 0;
	while(check)
	{
		next(a,n,check);
	}

	return 0;
}