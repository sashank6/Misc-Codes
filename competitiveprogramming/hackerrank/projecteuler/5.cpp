#include <iostream>
#include<cmath>
#include<vector>
using namespace std;
int nlog(int base, int n)
{
	if(base==n)
	return 1;
	double x=log2(n)/log2(base);
	return x;
}
vector<int> genPrime(int n)
{
	vector<int> v;
	 if(n>=2)
	 {
	 	v.push_back(2);
	 	for(int i=3;i<n;i=i+2)
	 	{
	 		bool t=true;
	 		for(int j=0;j<v.size()&&v[j]<=sqrt(i);j++)
	 		{
	 			if(i%v[j]==0)
	 			{
	 				t=false;
	 				break;
	 			}
	 			
	 		}
	 		if(t)
	 		v.push_back(i);
	 	}
	 }
	 return v;
}



int main() {
	vector<int> vf=genPrime(41);
	int tc;
	cin>>tc;
	while(tc--)
	{
		long int sum=1;
		int n;
		cin>>n;
		for(int i=0;i<vf.size()&&vf[i]<=n;i++)
		{
			sum=sum*pow(vf[i],nlog(vf[i],n));
		}
		cout<<sum<<endl;
	}

	return 0;
}
