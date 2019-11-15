#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
/*	vector <string> a;
	vector <string> b;*/
	int n ;
	int m;
	string S;
	string temp;

	cin>>n>>m;
	string* a = new string[m];
	string* b = new string[m];
	cin.ignore();

	for (int i = 0 ; i < m ; i++)
	{
		getline(cin,temp);
		int pos = temp.find_first_of(' ');
		a[i] = temp.substr(0,pos);
		b[i] = temp.substr(pos+1);
	}

	getline(cin,S);
	int i ;
	int pos = S.find_first_of(' ');
	while(pos < S.size())
	{
		temp = S.substr(0,pos);
		S = S.substr(pos+1,S.size());

		for (int j = 0 ; j < m ; j++)
			if (a[j] == temp)
				{
					if (a[j].size() <= b[j].size() )
						cout<<a[j]<<" ";
					else
						cout<<b[j]<<" ";
				}

		pos = S.find_first_of(' ');
	}
		for (int j = 0 ; j < m ; j++)
			if (a[j] == S)
				{
					if (a[j].size() <= b[j].size() )
						cout<<a[j]<<" ";
					else
						cout<<b[j]<<" ";;
				}
	return 0;
}