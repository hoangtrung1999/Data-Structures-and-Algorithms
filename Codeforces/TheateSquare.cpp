//Link to problem: http://codeforces.com/problemset/problem/1/A
#include <iostream>
using namespace std;

int main()
{
	long long int m;
	long long int n;
	long long int a;
	cin>>n>>m>>a;
	long long int result = ((m+a-1)/a) * ((n+a-1)/a);
	cout<<result;
}