#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
unsigned int size=0;
int determinant_test(vector<vector<int> > mat,unsigned int size)
{
int sum=0;
if(size<2)
{
return sum;
}
if(size==2)
{
sum=(mat[0][0]*mat[1][1])-(mat[0][1]*mat[1][0]);
return sum;
}
if(size>2)
{
for(int k=0;k<size;k++)
{
int elem=mat[0][k];
int elem_row=0;
int elem_col=k;
vector<vector<int> > new_mat;
for(int i=1;i<size;i++)
{
vector<int> row;
for(int j=0;j<size;j++)
{
if((i==elem_row)||(j==elem_col)){}
else
{
row.push_back(mat[i][j]);
}
}
new_mat.push_back(row);
}
if(k%2)
sum-=elem*determinant_test(new_mat,size-1);
else
sum+=elem*determinant_test(new_mat,size-1);
}
return sum;
}
return -1;
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
void processData(string str[],unsigned int len)
{
vector<vector<int> > matrix;
for(;;size++)
if(str[size]=="<>")
break;
vector<int> row;
for(unsigned int i=0;i<len;i++)
if(str[i]=="<>")
{
matrix.push_back(row);
row.clear();
}
else
row.push_back(parseInt(str[i]));
matrix.push_back(row);
unsigned int x=0,y=0;
cout<<determinant_test(matrix,size);
}
int main()
{
string A[] = gets(stdin);
  unsigned int len=sizeof(A)/sizeof(*A);
  processData(A,len);
return 0;
}
