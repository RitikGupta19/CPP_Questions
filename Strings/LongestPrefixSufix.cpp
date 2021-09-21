// Overlapping case
class Solution
{
public:
  void findLPS(string s, int lps[], int n)
  {
    lps[0] = 0;
    int len = 0, i = 1;
    while (i < n)
    {
      if (s[len] == s[i])
      {
        len++;
        lps[i] = len;
        i++;
      }
      else
      {
        if (len == 0)
        {
          lps[i] = 0;
          i++;
        }
        else
        {
          len = lps[len - 1];
        }
      }
    }
  }

  int lps(string s)
  {
    // Your code goes here
    int i, max, n = s.length();
    int lps[n];
    findLPS(s, lps, n);
    max = lps[n - 1];
    return max;
    // if prefix and sufix should not overlap
    // return max > n/2 ? max/2 : max;
  }
};
