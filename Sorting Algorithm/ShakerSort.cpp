#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void InputArray(int ArrayA[], int &n)
{
	cout<<"Nhap vao kich thuoc mang: ";
	cin>>n;
	srand(time(NULL));
	for (int i = 0 ; i < n ; i++)
		{
			int x = rand() % 100;
			ArrayA[i] = x;
		}
	cout<<"Random Input: ";
	for (int i = 0 ; i < n ; i++)
		cout<<ArrayA[i]<<" ";
	cout<<endl;
}

void PrintResult (int Array[], int n)
{
	cout<<"Result: ";
	for (int j = 0 ; j < n ;j++)
		cout<<Array[j]<<" ";
	cout<<endl;
}

void ShakerSort (int Array[] , int n)
{
	cout<<"ShakerSort"<<endl;
	int Left = 0;
	int Right = n -1;
	int k = 0;
	int temp;
	while (Left < Right)
	{
		for (int i = Left ; i < Right ; i++)
			if (Array[i] > Array[i+1])
			{
				k = i;
				temp = Array[i];
				Array[i] = Array[i+1];
				Array[i+1] = temp;
			}
		Right = k;
		for (int i = Right ; i > Left ; i--)
			if (Array[i] < Array[i-1])
			{
				k = i;
				temp = Array[i];
				Array[i] = Array[i-1];
				Array[i-1] = temp;
			}
		Left = k;
	}
	PrintResult(Array,n);
}


int main()
{
	int ArrayA[100];
	int n;
	clock_t start;
	clock_t end;
	InputArray(ArrayA,n);
	// Call And Calculate Running Time

	start = clock();
	ShakerSort(ArrayA,n);
	end = clock();
	cout<<"ShakerSort runs in "<<((double)(end -start))/CLOCKS_PER_SEC<<"s"<<endl;

	return 0;
}