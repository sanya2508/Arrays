#include<iostream>
using namespace std;
void staircase(int a[][31],int n,int m,int key)
{
  int i=0;
  int j=m-1;
  while(i<n && j>=0)
  {
      if(a[i][j]==key)
      {
          cout<<"1"<<endl;
          break;
      }
      else if(a[i][j]>key)
      {
          j--;
      }
      else
     
      {
          i++;
      }
     if(a[i][j]!=key)
     {
cout<<"0";
     break;}
  }
}
int main() {
    int n,m;
    cin>>n>>m;
    int arr[31][31];
    for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cin>>arr[i][j];
    }
}
int number;
cin>>number;
// if (number< arr[0][0] || number>arr[n-1][m-1])
// cout<<"0";
staircase(arr,n,m,number);
return 0;
}
