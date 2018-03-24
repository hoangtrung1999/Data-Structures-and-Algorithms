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

void Merge (int ArrayA[], int Left , int Mid , int Right)
{
	int temp[256];
	int n;

	int i = Left;
	int j = Mid + 1;
	n = 0 ;
	while (!(i > Mid && j > Right))
	{
		if ((i <= Mid && j <= Right && ArrayA[i] < ArrayA[j])|| j > Right)
			temp[n++] = ArrayA[i++];
		else
			temp[n++] = ArrayA[j++];
	}
	for (i = 0 ; i < n ; i++)
		ArrayA[Left+i] = temp[i];
}

void MergeSort (int ArrayA[], int Left , int Right )
{
	if ( Left < Right)
	{
		int Mid = (Left + Right)/2;
		MergeSort(ArrayA,Left,Mid);
		MergeSort(ArrayA,Mid+1,Right);
		Merge(ArrayA,Left,Mid,Right);
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
	cout<<"Merge Sort"<<endl;
	MergeSort(ArrayA,0,n-1);
	PrintResult(ArrayA,n);
	end = clock();
	cout<<"MergeSort runs in "<<((double)(end -start))/CLOCKS_PER_SEC<<"s"<<endl;
	return 0;
}