#include <iostream>
#include <ctime>
using namespace std;

void InputArray(int ArrayA[], int &n)
{
	cout<<"Nhap vao kich thuoc cua mang: ";
	cin>>n;
	cout<<"Nhap vao cac phan tu cua mang: "<<endl;
	for (int i = 0 ; i < n ; i++)
		cin>>ArrayA[i];

	/*copy(ArrayA,ArrayA + n,ArrayB);
	copy(ArrayA,ArrayA + n,ArrayC);
	copy(ArrayA,ArrayA + n,ArrayD);*/
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