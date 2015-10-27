#include <iostream>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--)
	{
		long int n;
		cin>>n;
		cout<<((n*(3*n+2)*(n*n-1))/12)<<endl;
	}
	return 0;
}
