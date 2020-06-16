#include<iostream>
using namespace std;
void merge(long long int * a, long long int s, long long int e) {
  long long int mid = (s + e) / 2;
  long long int i = s;
  long long int j = mid + 1;
  long long int k = s;
  long long int temp[1000000];
  while (i <= mid && j <= e) {
    if (a[i] < a[j]) {
      temp[k++] = a[i++];
    } else {
      temp[k++] = a[j++];
    }
  }
  while (i <= mid) {
    temp[k++] = a[i++];
  }
  while (j <= e) {
    temp[k++] = a[j++];
  }
  ///copy elements to original array
  for (int i = s; i <= e; i++) {
    a[i] = temp[i];
  }

}
void mergeSort(long long int a[], long long int s, long long int e) {
  ///base case
  if (s >= e)
    return;
  ///.divide
  long long int mid = (s + e) / 2;
  ///recursively the array
  mergeSort(a, s, mid);
  mergeSort(a, mid + 1, e);
  ///merge 2 arrays
  merge(a, s, e);
}
int main() {
  long long int a[1000000];
  long long int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  mergeSort(a, 0, n - 1);
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  return 0;
}
