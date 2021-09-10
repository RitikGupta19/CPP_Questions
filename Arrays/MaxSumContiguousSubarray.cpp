// https://www.techiedelight.com/print-continuous-subarray-with-maximum-sum/
// Link to find the subarray with maximum sum
class Solution
{
public:
  // arr: input array
  // n: size of array
  //Function to find the sum of contiguous subarray with maximum sum.
  int maxSubarraySum(int arr[], int n)
  {

    // Your code here
    int i, res = arr[0], maxSum = arr[0];
    for (i = 1; i < n; i++)
    {
      // prev = maxSum;
      maxSum = max(maxSum + arr[i], arr[i]);
      if (maxSum > res)
      {
        res = maxSum;
      }
    }
    return res;
  }
};
