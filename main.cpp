#include <iostream>
using namespace std;

int m, n;

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int reduce(int a, int b)
{
    if(a==0 || b==0)
        return 0;
    else
    {
        m=a/gcd(a,b);
        n=b/gcd(a,b);
        return 1;
    }
}

int main()
{
    cout<<"Enter integer m: ";
    cin>>m;
    cout<<"Enter integer n: ";
    cin>>n;
    if (reduce(m,n)==1)
    {
		cout << m << '/' << n << endl;
	}
	else
	{
		 cout << "fraction error" << endl;
	}
	return 0;
}
