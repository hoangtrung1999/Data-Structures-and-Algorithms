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

void BubbleSort (int ArrayA[], int n )
{
	cout<<"BubbleSort"<<endl;
	int temp;
	for (int i = 0 ; i < n ; i++)
		for (int j = n - 1 ; j > i ; j--)
			if (ArrayA[j] < ArrayA[j-1])
			{
				temp = ArrayA[j];
				ArrayA[j] = ArrayA[j-1];
				ArrayA[j-1] = temp;
			}
	PrintResult(ArrayA,n);
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
	BubbleSort(ArrayA,n);
	end = clock();
	cout<<"BubbleSort runs in "<<((double)(end -start))/CLOCKS_PER_SEC<<"s"<<endl;
	return 0;
}