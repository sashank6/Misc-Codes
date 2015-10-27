#include <iostream>
using namespace std;
long int compute(string str)
{
	long int product=1;
	for(int i=0;i<str.length();i++)
	product*=str[i]-'0';
	return product;
}

int main() {
	int tc;
	cin>>tc;
	while(tc--)
	{
	int n,k;
	cin>>n;
	cin>>k;
	string str;
	cin>>str;
	long int max,prod;
	prod=compute(str.substr(0,k));
	max=prod;int j=0;
	for(int i=k;i<str.length();i++)
	{
		if((str[j]-'0')^0)
		{
			prod=((str[i]-'0')*prod)/(str[j++]-'0');
		}
		else
		prod=compute(str.substr(++j,k));
		max=(max<prod)?prod:max;
	}
	cout<<max<<endl;
	}
	return 0;
}
