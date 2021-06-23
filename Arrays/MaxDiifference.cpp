// base on Next Greatest Element on both sides of array.

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
  /*You are required to complete this method */
  void nearBySmallest(int arr[], int n, int res[])
  {
    stack<int> st;
    st.push(arr[0]);
    for (int i = 1; i < n; i++)
    {
      while (!st.empty() && st.top() >= arr[i])
      {
        st.pop();
      }

      res[i] = (!st.empty()) ? st.top() : 0;
      st.push(arr[i]);
    }
  }

  int findMaxDiff(int arr[], int n)
  {
    //Your code here
    int ls[n] = {0}, rs[n] = {0};
    nearBySmallest(arr, n, ls);
    reverse(arr, arr + n);
    nearBySmallest(arr, n, rs);

    int maxDiff = 0, diff = 0;
    for (int i = 0; i < n; i++)
    {
      diff = abs(ls[i] - rs[n - i - 1]);
      maxDiff = max(maxDiff, diff);
    }

    return maxDiff;
  }
};

// { Driver Code Starts.
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
      cin >> a[i];
    Solution ob;
    cout << ob.findMaxDiff(a, n) << endl;
  }
  return 0;
}
