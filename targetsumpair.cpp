#include <iostream> 
#include <algorithm>
using namespace std;
int main()
{
   int i, n;
   signed int target;
   signed int a[999];
    cin >> n;
    for(i = 0; i < n; i++)
    {
       cin >> a[i];

    }
    sort(a,a+n);
    cin>>target;
for(i=0;i<n;i++)
{for (int j = i+1; j < n; j++)
{
if(a[i]+a[j]==target)
cout<<a[i]<<" and "<<a[j]<<endl;
}
}
return 0;
}
