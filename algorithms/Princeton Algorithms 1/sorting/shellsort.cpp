#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int> v)
{
	for(int i=0;i<v.size();i++)
	cout<<v[i]<<",";
	cout<<endl;
}
 
int main() {
	// your code goes here
	int arr[]={17,28,18,47,7,25,83,86,53,69,62,95};
	int len=sizeof(arr)/sizeof(*arr);
	vector<int> v;
	for(int i=0;i<len;i++)
	v.push_back(arr[i]);
	int h=3;
	display(v);
	int i,j;
	for(i=0;i<v.size();i++)
	{
		for(j=i+h;(j-h)>=0&&j<v.size();j=j-h)
		if(v[j]<v[j-h])
		swap(v[j],v[j-h]);
	}
	display(v);
	return 0;
}

