#include <iostream>
using namespace std;
int cnt = 0;


void inputArr(int arr[], int n) {
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
}

void outputArr(int arr[], int n) {
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
}

void copyArr(int x[], int arr[], int be, int en) {
    while (be <= en) {
        x[be] = arr[be];
        ++be;
    }
}

int mergeInvCnt(int arr[], int be, int en, int mid) {
    int x[100];
    int y[100];
    copyArr(x, arr, be, mid);
    copyArr(y, arr, mid + 1, en);

    int i = be;
    int j = mid + 1;
    int k = be;
    int ans = 0;
    while (i <= mid && j <= en) {
        if (x[i] <= y[j]) {
            arr[k] = x[i];
            ++k;
            ++i;
        } else {
            ans += (mid - i) + 1;
            arr[k] = y[j];
            ++j;
            ++k;
        }
    }

    while (i <= mid) {
        arr[k] = x[i];
        ++i;
        ++k;
    }

    while (j <= en) {
        arr[k++] = y[j++];      // ignore
    }
    return ans;
}

int inversionCount(int arr[], int be, int en) {
    if (be >= en) {
        return 0;
    }

    int mid = (be + en) / 2;
    int lt = inversionCount(arr, be, mid);
    int rt = inversionCount(arr, mid + 1, en);
    int ans = mergeInvCnt(arr, be, en, mid);
    return lt + ans + rt;
}


int main() {
    int arr[100];
    int n;
    cin >> n;
    inputArr(arr, n);

     int ans = inversionCount(arr, 0, n - 1);
     cout << ans << endl;
     outputArr(arr, n);

}
