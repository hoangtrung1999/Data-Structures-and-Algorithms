#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
	stack<int> s;
	vector<int> v;
	int n;
	cin>>n;
	int* A = new int[n];

	for (int i = 0 ; i < n ; i++)
		cin>>A[i];
	int pivot = 1;
	for (int i = 0 ; i < n ; i++)
	{
		if (A[i] == pivot)
		{
			T.push_back(pivot);
			pivot++;
		}
		else if (!s.empty() && s.top() == pivot)
		{
			
		}
		else
			s.push(A[i]);
	}
	return 0;
}