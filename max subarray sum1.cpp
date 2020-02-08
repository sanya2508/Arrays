#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[100];
    int cursum;
    int maxsum=0;
    int left,right;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            cursum=0;
            for(int k=i; k<=j; k++){
               cursum+=a[k];
               if(cursum>maxsum)
               {maxsum=cursum;
               left=i;
               right=j;
               }
            }
        }
    }

    cout<<"Max sum "<<maxsum<<endl;
    for(int k=left; k<=right; k++){
        cout<<a[k]<<" ";
    }
    return 0;
}
