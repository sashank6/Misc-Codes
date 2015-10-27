#include<iostream>
#include<vector>
#include<cmath>
#include<sstream>
using namespace std;
string integerToString(unsigned int value)
{
stringstream s1;
s1<<value;
string data=s1.str();
s1.clear();
return data;
}
unsigned int parseInt(string p_Data)
{
unsigned int result=0;
unsigned int length=p_Data.length();
for(int index=length-1;index>=0;index--)
result+=(p_Data[index]-'0')*pow(10,length-index-1);
return result;
}
vector<string> split(string str,char delim)
{
        vector<string> data;
        unsigned int length=str.length();
        string temp="";
        for(unsigned int i=0;i<length;i++)
        {
                if(str[i]==delim)
                {
                        data.push_back(temp);
                        temp="";
                }
                else
                temp+=str[i];
        }
		data.push_back(temp);   
        return data;
}
void optimal(string strArr[],unsigned int len)
{
	unsigned int vsize=0;
	vector<int> matrix;	
	for(unsigned int i=0;i<len;i++)
	{
		unsigned int ln=strArr[i].length();
		strArr[i]=strArr[i].substr(1,ln-2);
		vector<string> matrixdata=split(strArr[i],',');
		vsize=(vsize==0)?(matrixdata.size()):vsize;
		for(unsigned int j=0;j<vsize;j++)
		matrix.push_back(parseInt(matrixdata[j]));		
	}
   int machine[vsize];
	for(int k=0;k<vsize;k++)
	machine[k]=-1;	
int count=0;	
while(1)
	{
		vector<int> ::iterator it=min_element(matrix.begin()+(count*vsize),(matrix.begin()+(count+1)*vsize));
		int i;
		int min=(int)*it;
                i=distance(matrix.begin(),it);
		

		machine[(i/vsize)]=((i%vsize)+1);
		//cout<<i<<endl;
		//cout<<machine[i/3]<<endl;
                for(int k=vsize*(i/vsize);k<vsize*((i/vsize)+1);k++)
		matrix[k]=numeric_limits<int>::max();		
		for(int k=i%vsize;k<vsize*vsize;k+=vsize)
		matrix[k]=numeric_limits<int>::max();
cout<<"----------------------------------------------------"<<endl;      
for(i=0;i<vsize*vsize;i++)
		cout<<matrix[i]<<endl;
cout<<"---Machine----------"<<endl;
for(int l=0;l<vsize;l++)
cout<<machine[l]<<endl;
		int px=0;
		for(int m=0;m<vsize;m++)
		if(machine[m]!=-1)
		px++;
		if(px==vsize)	
		break;		
count++;


	}
for(int i=0;i<vsize;i++)
cout<<machine[i]<<endl;
}
int main()
{
string arrdata[]={"(13,4,7,6)","(1,11,5,4)","(6,7,2,8)","(1,3,5,9)"};
optimal(arrdata,sizeof(arrdata)/sizeof(*arrdata));
return 0;
}
