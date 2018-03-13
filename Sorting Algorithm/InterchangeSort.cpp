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

void InterchangeSort (int ArrayA[], int n )
{
	cout<<"InterchangeSort"<<endl;
	int temp;
	for (int i = 0 ; i < n - 1; i++)
		for (int j = i + 1 ; j < n ; j++)
			if (ArrayA[j] < ArrayA[i])
			{
				temp = ArrayA[j];
				ArrayA[j] = ArrayA[i];
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
	InterchangeSort(ArrayA,n);
	end = clock();
	cout<<"InterchangeSort runs in "<<((double)(end -start))/CLOCKS_PER_SEC<<"s"<<endl;
	return 0;
}