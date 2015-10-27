#include <iostream>
#include<vector>
using namespace std;
char v[100][100];
bool search(int x,int y,int n,int m,int &wavecount)
{
	if(x<0|| x >= n)
	return false;
	if(y <0 || y >=m)
	return false;
	if(v[x][y]=='*')
	return true;
	
	
	
	
	int dircount=0;
	dircount+=(v[x-1][y]=='.')||(v[x-1][y]=='*');
	dircount+=(v[x+1][y]=='.')||(v[x+1][y]=='*');
	dircount+=(v[x][y-1]=='.')||(v[x][y-1]=='*');
	dircount+=(v[x][y+1]=='.')||(v[x][y+1]=='*');
	v[x][y]='X';
	
	int t1count;
	
	t1count=0;
	if((v[x-1][y]=='.')||(v[x-1][y]=='*'))
	if(search(x-1,y,n,m,t1count))
	{
	
		if(dircount>1)
		{
		wavecount++;
		
		}

		wavecount+=t1count;

		return true;
	}

	t1count=0;
	if((v[x+1][y]=='.')||(v[x+1][y]=='*'))
	if(search(x+1,y,n,m,t1count))
	{
	
		if(dircount>1)
		{
		wavecount++;
		
		}

		wavecount+=t1count;

		return true;
	}
	
	t1count=0;
	if((v[x][y+1]=='.')||(v[x][y+1]=='*'))
	if(search(x,y+1,n,m,t1count))
	{
	
			if(dircount>1)
		{
		wavecount++;
		
		}

		wavecount+=t1count;

		return true;
	}
	
	t1count=0;
	if((v[x][y-1]=='.')||(v[x][y-1]=='*'))
	if(search(x,y-1,n,m,t1count))
	{
		
		if(dircount>1)
		{
		wavecount++;
		
		}

		wavecount+=t1count;

		return true;
	}
	
	return false;
	
}

void position(int &x,int &y,int n,int m)
{
	for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
	if(v[i][j]=='M')
	{
		
	x=i;y=j;
	return;
	}
}
int main() {

int tc;
cin>>tc;
while(tc--)
{

	int n,m;
	cin>>n;
	cin>>m;
	for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
	cin>>v[i][j];
	int k;
	cin>>k;
	int x=0,y=0;
	position(x,y,n,m);
	int wv=0;
if(search(x,y,n,m,wv))
if(wv==k)
cout<<"Impressed"<<endl;
else
cout<<"Oops!"<<endl;
}
	
	return 0;
}
