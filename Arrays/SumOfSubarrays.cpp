// https://www.geeksforgeeks.org/sum-of-all-subarrays/

#include <bits/stdc++.h>
using namespace std;

long int SubArraySum(int arr[], int n)
{
  long int result = 0;

  // computing sum of subarray using formula
  for (int i = 0; i < n; i++)
    result += (arr[i] * (i + 1) * (n - i));

  return result;
}

int main()
{
  int arr[] = {1, 2, 3};
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << "Sum of SubArray : "
       << SubArraySum(arr, n) << endl;
  return 0;
}
