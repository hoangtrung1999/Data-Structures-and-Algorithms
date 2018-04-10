#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int Swap = 0;
int Compare = 0;
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

void Heapify (int ArrayA[], int n , int pivot)
{
	while (pivot < n/2)
	{
		int temp = 2*pivot + 1;// Pos Left Child
		if (temp + 1 < n &&  ArrayA[temp] < ArrayA[temp+1])
		{
			Compare += 2;
			temp++;
		}
		if (ArrayA[pivot] < ArrayA[temp])
		{
			Compare++;
			Swap++;
			swap(ArrayA[pivot],ArrayA[temp]);
		}
		else
			break;
		pivot = temp;
	}
}

void BuildBinaryTree (int ArrayA[], int n)
{
	for (int i = n / 2 - 1 ; i >= 0 ; i--)
		Heapify(ArrayA,n,i);
}

void HeapSort (int ArrayA[], int n )
{
	cout<<"Heap Sort"<<endl;
	BuildBinaryTree(ArrayA,n);
	int length = n;
	while (length > 1)
	{
		int temp = ArrayA[0];
		ArrayA[0] = ArrayA[length-1];
		ArrayA[length-1] = temp;
		Swap++;
		length--;
		Heapify(ArrayA,length,0);
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
	HeapSort(ArrayA,n);
	end = clock();
	cout<<"Heap Sort runs in "<<((double)(end -start))/CLOCKS_PER_SEC<<"s"<<endl;
	cout<<"Swap: "<<Swap<<endl;
	cout<<"Compare: "<<Compare<<endl;
	return 0;
}