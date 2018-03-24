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

 int Partition (int ArrayA[], int low , int high)
 {
 	int pivot = ArrayA[high];
	int i = low - 1;
	int j = low ;
	int temp;
	
	for (; j < high ; j++)
	{
			if (ArrayA[j] <= pivot)
			{
				i++;
				temp = ArrayA[i];
				ArrayA[i] = ArrayA[j];
				ArrayA[j] = temp;
			}
	}
		temp = ArrayA[high];
		ArrayA[high] = ArrayA[i+1];
		ArrayA[i+1] = temp;
	return i + 1;
 }

void QuickSort (int ArrayA[], int n, int low , int high)
{
	if ( low < high)
	{
		int i = Partition(ArrayA,low,high);
		QuickSort(ArrayA,n,low,i-1);
		QuickSort(ArrayA,n,i+1,high);
	}
		
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
	cout<<"Quick Sort"<<endl;
	QuickSort(ArrayA,n,0,n-1);
	PrintResult(ArrayA,n);
	end = clock();
	cout<<"Quick Sort runs in "<<((double)(end -start))/CLOCKS_PER_SEC<<"s"<<endl;
	return 0;
}