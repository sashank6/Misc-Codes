#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
unsigned int size=0;
int symmetric(vector<vector<int> > mat)
{
  vector<vector<int> > mat1=mat;
  for(int i=0;i<size;i++)
  for(int j=i;j<size;j++)
  swap(mat1[i][j],mat1[j][i]);

  for(int i=0;i<size;i++)
  {
  for(int j=0;j<size;j++)
  if(mat[i][j]^mat1[i][j])
   return 0;
   }
  return 1;


}

int parseInt(string p_Data)
{
int start_index=0;
int length=p_Data.length();
if(p_Data[0]=='-')
start_index=1;
int result=0;
for(int index=length-1;index>=start_index;index--)
result+=(p_Data[index]-'0')*pow(10,length-index-1);
if(start_index)
return -(result);
return result;
}
int processData(string str[],unsigned int len)
{
vector<vector<int> > matrix;
for(;;size++)
if(str[size]=="<>")
break;
vector<int> row;
for(unsigned int i=0;i<len;i++)
if(str[i]=="<>")
{
  if(row.size()!=size)
    return -1;
matrix.push_back(row);
row.clear();
}
else
row.push_back(parseInt(str[i]));
if(row.size()!=size)
    return -1;
  matrix.push_back(row);
if(matrix.size()!=size)
  return -1;
int xx=symmetric(matrix);
  return xx;
}
int main()
{
string A[] = gets(stdin); 
  unsigned int len=sizeof(A)/sizeof(*A);
  int g=processData(A,len);
  switch(g)
  {
     case 0:
	cout<<"not symmetric";
        break;
     case 1:
       cout<<"symmetric";
       break;
     default:
      	cout<<"not possible";
        break;
}
  
return 0;
}
