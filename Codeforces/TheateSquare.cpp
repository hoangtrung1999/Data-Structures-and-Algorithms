//Link to problem: http://codeforces.com/problemset/problem/1/A
#include <iostream>
using namespace std;

int main()
{
	int m;
	int n;
	int a;
	cin>>n>>m>>a;
	double result = ((m+a-1)/a) * ((n+a-1)/a);
	cout<<result;
}