#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
int main()
{
    int i, n, target;
    int a[1000];
    cin >> n;
    for(i = 0; i < n; i++)
    {
       cin >> a[i];
    }
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
