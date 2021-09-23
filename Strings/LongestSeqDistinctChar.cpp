class Solution
{
public:
  int longestUniqueSubsttr(string str)
  {
    //code
    int i = 0, res = 0, maxEnd = 0;
    vector<int> prev(256, -1);
    for (int j = 0; j < str.length(); j++)
    {
      i = max(i, prev[str[j]] + 1);
      maxEnd = j - i + 1;
      res = max(res, maxEnd);
      prev[str[j]] = j;
    }
    return res;
  }
};
