#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin>>n;
	getchar();
	string s;
	getline(cin,s);
	string forbiden = "xxx";
	size_t found = s.find(forbiden);
	int result = 0;
	if (found == string::npos)
		cout<<"0";
	else
	{
		bool flag = true;
		do
		{
			size_t found = s.find(forbiden);
			if (found != string::npos)
			{
				s.erase(s.begin()+found,s.begin()+found+1);
				result++;
			}
			else
				flag = false;
		}while (flag == true);
		cout<<result;
	}

	return 0;
}