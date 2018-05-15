#include <iostream>
using namespace std;

void PrintTest (int AmountOfEachNumber[], int result)
{
	cout<<endl;
	for (int i = 0 ; i < 4 ; i++)
		cout<<AmountOfEachNumber[i]<<endl;
	cout<<"Result: "<<result<<endl;
}

int main()
{
	int n;
	int x;
	int AmountOfEachNumber[4] = {0};
	int result = 0;
	cin>>n;
	for (int i = 0 ; i < n ; i++)
	{
		cin>>x;
		AmountOfEachNumber[x-1] += 1;
	}

	PrintTest(AmountOfEachNumber,result);
	result += AmountOfEachNumber[3]; // Each 4-group gets into a taxi;
	AmountOfEachNumber[3]  = 0;

	result += AmountOfEachNumber[1] / 2; // Every two 2-group gets into a taxi;
	AmountOfEachNumber[1] = AmountOfEachNumber[1] % 2; // There will be 0 or 1 2-group;
	PrintTest(AmountOfEachNumber,result);

	result += AmountOfEachNumber[0] / 4; // 4 1-groups into 1 taxi;
	AmountOfEachNumber[0] = AmountOfEachNumber[0] % 4;
	PrintTest(AmountOfEachNumber,result);
	
	if (AmountOfEachNumber[0] <= AmountOfEachNumber[2]) // 1 < 3 group;
		{
			AmountOfEachNumber[2] -= AmountOfEachNumber[0];
			result += AmountOfEachNumber[0]; // 1-group;
			result += AmountOfEachNumber[1]; // the rest of 2-groups;
			result += AmountOfEachNumber[2]; // the rest of 3-groups;
		}

	else if (AmountOfEachNumber[0] >= AmountOfEachNumber[2]) // 1 > 3 group;
		{
			AmountOfEachNumber[0] -= AmountOfEachNumber[2];
			result += AmountOfEachNumber[2]; // 3-groups;
			
			// Now we have 1 2-group and {1,2,3} 1-groups;
			if (AmountOfEachNumber[0] < 3)
			{
				result++;
			}
			else
				result += 2;
		}
	cout<<result;
	return 0;
}