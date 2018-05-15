#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x;
	int y;
	int Array[5][5];
	for (int i = 0 ; i < 5 ; i++)
		for (int j = 0 ; j < 5 ; j++)
		{
			cin>>Array[j][i];
			if (Array[j][i] == 1)
			{
				x = i;
				y = j;
			}
		}
	int result = abs(2-x) + abs(2-y);
	cout<<result;
	return 0;
}