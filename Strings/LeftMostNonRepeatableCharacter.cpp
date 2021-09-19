class Solution
{
public:
  //Function to find the first non-repeating character in a string.
  char nonrepeatingCharacter(string S)
  {
    //Your code here
    int index[256] = {0};
    int i, res = INT_MAX;
    for (i = 0; i < 256; i++)
      index[i] = -1;
    for (i = 0; i < S.length(); i++)
    {
      if (index[S[i]] == -1)
      {
        index[S[i]] = i;
      }
      else
      {
        index[S[i]] = -2;
      }
    }
    for (i = 0; i < 256; i++)
    {
      if (index[i] >= 0)
      {
        res = min(res, index[i]);
      }
    }
    if (res == INT_MAX)
    {
      return '$';
    }
    return S[res];
  }
};
