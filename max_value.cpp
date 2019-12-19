#include <iostream>
using namespace std;
int main()
{
    int i, n; 
    signed int max=-1000000000;
    signed int arr[100];
    cin >> n;
    cout << endl;
    for(i = 0; i < n; i++)
    {
       cin >> arr[i];
    }
    for(i = 0;i < n; ++i)
    {
if(max < arr[i])
           max = arr[i];
    }
    cout << max;
    return 0;
}
