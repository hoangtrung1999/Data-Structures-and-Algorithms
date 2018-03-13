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

void ShellSort (int Array[], int n)
{
	cout<<"ShellSort"<<endl;
	 // Start with a big gap, then reduce the gap
        for (int gap = n/2; gap > 0; gap /= 2)
        {
            // Do a gapped insertion sort for this gap size.
            // The first gap elements a[0..gap-1] are already
            // in gapped order keep adding one more element
            // until the entire array is gap sorted
            for (int i = gap; i < n; i += 1)
            {
                // add a[i] to the elements that have been gap
                // sorted save a[i] in temp and make a hole at
                // position i
                int temp = Array[i];

                // shift earlier gap-sorted elements up until
                // the correct location for a[i] is found
                int j;
                for (j = i; j >= gap && Array[j - gap] > temp; j -= gap)
                    Array[j] = Array[j - gap];

                // put temp (the original a[i]) in its correct
                // location
                Array[j] = temp;
            }
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
	ShellSort(ArrayA,n);
	end = clock();
	cout<<"ShellSort runs in "<<((double)(end -start))/CLOCKS_PER_SEC<<"s"<<endl;

	return 0;
}