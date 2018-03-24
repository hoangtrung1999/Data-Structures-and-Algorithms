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

void SelectionSort (int ArrayA[], int n )
{
	cout<<"Selection Sort"<<endl;
	int index;
	int temp;
	for (int i = 0 ; i < n - 1 ; i++)
	{
		index = i;
		for (int j = i ; j < n ; j++)
			if ( ArrayA[j] < ArrayA[index])
				index = j;
		temp = ArrayA[index];
		ArrayA[index] = ArrayA[i];
		ArrayA[i] = temp;
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
	SelectionSort(ArrayA,n);
	end = clock();
	cout<<"Selection Sort runs in "<<((double)(end -start))/CLOCKS_PER_SEC<<"s"<<endl;
	return 0;
}