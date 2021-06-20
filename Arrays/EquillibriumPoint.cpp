class Solution
{
public:
  // Function to find equilibrium point in the array.
  // a: input array
  // n: size of array
  int equilibriumPoint(long long a[], int n)
  {

    // Your code here
    if (n == 1)
      return 1;
    int arrSum = 0;
    for (int i = 0; i < n; i++)
    {
      arrSum += a[i];
    }
    int leftArrSum = 0;
    for (int i = 0; i < n; i++)
    {
      if (leftArrSum == arrSum - a[i])
      {
        return i + 1;
      }
      leftArrSum += a[i];
      arrSum -= a[i];
    }
    return -1;
  }
};
