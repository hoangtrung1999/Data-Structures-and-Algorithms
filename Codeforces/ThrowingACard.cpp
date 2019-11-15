#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int n;
	cin>>n;
	bool flag = true;
	while(n > 0)
	{
		queue <int> q;
		for (int i = 1 ; i <= n ; i++)
			q.push(i);
		cout<<"Discarded cards: ";
		while (q.size() > 1)
		{
			if (q.size() > 2)
				cout<<q.front()<<", ";
			else
				cout<<q.front()<<endl;
			q.pop();
			q.push(q.front());
			q.pop();
		}
		cout<<"Remaining card: "<<q.front();
		if (flag == true)
		{
			cout<<endl;
			flag = false;
		}
		cin>>n;
		if (n == 0)
			return 0;
		else
			flag = true;

	}
	return 0;
}