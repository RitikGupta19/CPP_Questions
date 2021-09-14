//  https://www.geeksforgeeks.org/find-subarray-with-given-sum/
// https://www.geeksforgeeks.org/find-subarray-with-given-sum-in-array-of-integers/

// Solution, if only finding count of such arrays
// If need index then article solution is used

class Solution
{
public:
  int subArraySum(int arr[], int n, int sum)
  {
    //code here.
    unordered_map<int, int> m;
    int resSum = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
      resSum += arr[i];

      if (resSum == sum)
      {
        count++;
      }

      if (m.find(resSum - sum) != m.end())
      {
        count = count + m[resSum - sum];
      }

      m[resSum]++;
    }
    return count;
  }
};
