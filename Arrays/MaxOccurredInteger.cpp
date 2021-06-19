class Solution
{
public:
  // L and R are input array
  // maxx : maximum in R[]
  // n: size of array
  // arr[] : declared globally with size equal to maximum in L[] and R[]
  // Function to find the maximum occurred integer in all ranges.
  int maxOccured(int L[], int R[], int n, int maxx)
  {

    // Your code here
    vector<int> v(1000000, 0);
    for (int i = 0; i < n; i++)
    {
      v[L[i]] += 1;
      v[R[i] + 1] -= 1;
    }
    int max = v[0], res = 0;
    for (int i = 1; i <= maxx; i++)
    {
      v[i] = v[i] + v[i - 1];
      if (v[i] > max)
      {
        max = v[i];
        res = i;
      }
    }
    return res;
  }
};
