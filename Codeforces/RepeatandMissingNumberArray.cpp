#include <iostream>
#include <vector>
using namespace std;
typedef long long int lli
int main()
{
	lli s1 = 0;
    lli s2 = 0;
    lli s3 = 0;
    lli s4 = 0;
    vector<int> A = {3,1,2,5,3};
    for (int i = 1 ; i <= A.size(); i++)
    {
        s1 += i;
        s2 += A[i-1];
        s3 += i * i;
        s4 += A[i-1] * A[i-1];
    }
    vector <int> result;
    lli AA = 0.5 * ((s4-s3)/(s2-s1)+(s2-s1));
    lli B = AA - s2 + s1;
    cout<<AA<<" "<<B;
	return 0;
}