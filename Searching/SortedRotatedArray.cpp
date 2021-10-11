#include <bits/stdc++.h>
using namespace std;
int search(int A[], int l, int h, int key);

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
      cin >> A[i];
    int key;
    cin >> key;
    cout << search(A, 0, n - 1, key) << endl;
  }
  return 0;
} // } Driver Code Ends

int search(int A[], int l, int h, int key)
{
  if (l <= h)
  {
    int m = (l + h) / 2;
    if (A[m] == key)
      return m;
    // If first sub array is sorted
    if (A[l] <= A[m])
    {
      if (key >= A[l] && key <= A[m])
        return search(A, l, m - 1, key);
      else
        return search(A, m + 1, h, key);
    }
    // If later sub array is sorted

    if (key >= A[m] && key <= A[h])
      return search(A, m + 1, h, key);
    return search(A, l, m - 1, key);
  }
  return -1;
}
