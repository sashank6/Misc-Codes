#include <iostream>
#include<vector>
#include<cmath>
using namespace std;
vector<int> genPrime(int n)
{
	vector<int> v;
	 	v.push_back(2);
	 	for(long int i=3;v.size()<=n;i=i+2)
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
	 return v;
}
 
int main() {
	vector<int> vf=genPrime(10500);
	int tc;
	cin>>tc;
	while(tc--)
	{
		int x;
		cin>>x;
		cout<<vf[x-1]<<endl;
	}
	return 0;
}
