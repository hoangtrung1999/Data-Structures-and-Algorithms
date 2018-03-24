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
			//int x = rand() % 100;
			cin >> ArrayA[i];
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

void InsertionSort (int ArrayA[], int n )
{
	cout<<"Insertion Sort"<<endl;
	int i;
	int j;
	for (i = 1 ; i < n ; i++)
	{
		int x = ArrayA[i];
		for (j = i - 1; j >= 0 && ArrayA[j] > x; j--)
				ArrayA[j+1] = ArrayA[j];
			ArrayA[j+1] = x;
			PrintResult(ArrayA,n);
	}	
}

void TestInsertionSort (int Array[], int n)
{
	for (int i = 0 ; i < n - 1 ; i++)
	{
		for (int j = i ; j >= 0 ; j--)
			if (Array[j+1] < Array[j])
			{
				int temp = Array[j+1];
				Array[j+1] = Array[j];
				Array[j] = temp;
			}
		PrintResult(Array,n);
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
	InsertionSort(ArrayA,n);
	InputArray(ArrayA,n);
	TestInsertionSort(ArrayA,n);
	end = clock();
	cout<<"Insertion Sort runs in "<<((double)(end -start))/CLOCKS_PER_SEC<<"s"<<endl;
	return 0;
}