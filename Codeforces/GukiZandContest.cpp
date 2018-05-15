#include <iostream>
using namespace std;

int main()
{	
	int n;
	cin>>n;
	int* ListOfStudents = new int[n];
	int* Ranking = new int[n];
	int Highers = 1;

	for (int i = 0 ; i < n ; i++)
		cin>>ListOfStudents[i];

	for (int i = 0 ; i < n ; i++)
	{
		for (int j = 0 ; j < n ; j++)
			if (ListOfStudents[j] > ListOfStudents[i])
				Highers++;
		Ranking[i] = Highers;
		Highers = 1;
	}
	for (int i = 0 ; i < n ; i++)
		cout<<Ranking[i]<<" ";
	delete[] ListOfStudents;
	delete[] Ranking;
	return 0;
} 