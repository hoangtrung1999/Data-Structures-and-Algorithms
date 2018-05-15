#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int* Array = new int[n];
	for (int i = 0 ; i < n ; i++)
		cin>>Array[i];
	sort(Array,Array + n);
	for (int i = 1 ; i < n ; i++)
		Array[i] -= Array[i-1];
	
	return 0;
}