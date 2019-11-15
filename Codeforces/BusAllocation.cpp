#include <iostream>
#include <vector>
#include <algorithm>
//#include <time.h>
using namespace std;

struct Node
{
	int x;
	struct Node* pLeft;
	struct Node* pRight;
};

struct Node* Tree;
Tree t;

void Init ()

int Answer;

void Solve()
{
		vector<int> v1;
		int n;
		cin>>n;
		//n = rand() % 200000;
		int k;
		cin>>k;
		//k = rand() % 1000000000;
		for (int i = 0 ; i < n ; i++)
		{
			int temp;
			cin>>temp;
			v1.push_back(temp);
		}
		if (n == 1)
			Answer = 1;
		else
		{
			bool flag = false;
			vector <int> v2;
			v2.push_back(v1[0]);
			Answer++;
			for (int i = 1 ; i < n ; i++)
				{
					int temp = v1[i];
					for (int j = 0 ; j < v2.size() ; j++)
						if (temp - v2[j] > k)
						{
							flag = true;
							v2[j] = temp;
							break;
						}
					if (flag == true)
						flag = false;
					else
					{
						v2.push_back(v1[i]);
						Answer++;
					}
				}
		}
}

int main(int argc, char** argv)
{
	int T, test_case;
	/*
	   The freopen function below opens input.txt file in read only mode, and afterward,
	   the program will read from input.txt file instead of standard(keyboard) input.
	   To test your program, you may save input data in input.txt file,
	   and use freopen function to read from the file when using cin function.
	   You may remove the comment symbols(//) in the below statement and use it.
	   Use #include<cstdio> or #include <stdio.h> to use the function in your program.
	   But before submission, you must remove the freopen function or rewrite comment symbols(//).
	 */	

	// freopen("input.txt", "r", stdin);
	//srand(time(NULL));
	cin >> T;
	//T = rand() % 50 + 1;
	for(test_case = 0; test_case  < T; test_case++)
	{
		Answer = 0;
		Solve();
		setbuf(stdout, NULL);
		cout << "Case #" << test_case+1 << endl;
		cout << Answer << endl;
	}

	return 0;//Your program should return 0 on normal termination.
}