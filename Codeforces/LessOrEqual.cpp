#include <iostream>
	using namespace std;

	int main()
	{
		long long int n;
		long long int k;
		cin>>n>>k;
		long long int* Array = new long long int[n];
		long long int temp;
		bool flag = false;
		for (int i = 0 ; i < n ;i++)
			cin>>Array[i];
		for (int i = 0 ; i < n-1 ;i++)
			if (Array[i] != Array[i-1])
				flag = true;
		if (k == 1)
			cout<<Array[0];
		if (Array[0] == 1 && k == 0)
			cout<<"-1";
		else if (Array[0] != 1 && k == 0)
			cout<<Array[0]-1;
		else
		{
			if (flag == true)
		{
			for (int i = 0 ; i < n-1 ; i++)
				for (int j = i+1 ; j < n ; j++)
					if (Array[j] < Array[i])
					{
						temp = Array[j];
						Array[j] = Array[i];
						Array[i] = temp;
					}

			if (Array[k-1] == Array[k] || Array[k-1] == Array[k-2])
				cout<<"-1";	
			else
				cout<<Array[k-1]+1;
		}
		else
			cout<<"-1";

		}
		
		return 0;
	}