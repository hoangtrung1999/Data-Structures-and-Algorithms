#include <iostream>
using namespace std;
#define MaxN 256

void PrintBoard (int Board[][MaxN] , int N) // Print Row of each Queen
{
	cout<<"[";
	for (int i = 0 ; i < N ; i++)
		for (int j = 0 ; j < N ; j++)
			if (Board[j][i] == 1)
				cout<<j+1<<" ";
	cout<<"] ";
}

bool CheckSafe (int Board[][MaxN] , int N , int x , int y)
{
	int i = 0;
	int j = 0;
	for (i = 0 ; i < x ; i++) // Check Row
		if(Board[y][i] == 1)
			return false;
	for (i = x-1 , j = y-1 ; ( i>-1 ) && (j>-1) ; i-- , j--) // Check upperleft diagonal
		if (Board[j][i] == 1)
			return false;
	for (i = x-1 , j = y+1 ; (i>-1) && (j < N) ; i-- , j++) // Vheck lowerleft diagonal
		if (Board[j][i] == 1)
			return false;
	return true;
}

bool PlaceQueen (int Board[][MaxN] , int N, int row,int col)
{
	// if all queen have been placed
	if (col	>= N )
		return true;
	for (int i = row ; i < N ; i++) // Place in all row of this column
	{
		if (CheckSafe(Board,N,col,i)) // if the queen can place here
		{
			Board[i][col] = 1;
			if (PlaceQueen(Board,N,0,col+1)) // go to next column
				return true;
			Board[i][col] = 0; // can't place here, go back to place the previous queen(s).
		}
	}
	return false;
}

void ResetBoard (int Board[][MaxN] , int N)
{
	for (int i = 0 ; i < N ; i++)
		for (int j = 0 ; j < N ; j++)
			Board[j][i] = 0;
}

void SolveNQueen (int Board[][MaxN] , int N)
{
	if(PlaceQueen(Board,N,0,0) == false) // There is no solution
	{
		cout<<"[-1]"<<endl;
		return;
	}
	for (int i = 0 ; i < N ; i++)
	{
		ResetBoard(Board,N);
		if(PlaceQueen(Board,N,i,0)) // Always start with Col = 0 ; Row = i to find all solutions
		{
			i++;
			PrintBoard(Board,N);
		}
	}
}

int main()
{
	int Board[MaxN][MaxN] = {0};
	int T;
	int N;
	cin>>T;
	for (int i = 0 ; i < T ; i++)
	{
		cin>>N;
		SolveNQueen(Board,N);
		cout<<endl;
	}
	return 0;
}