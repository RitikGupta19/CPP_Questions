// https://practice.geeksforgeeks.org/problems/excel-sheet5448/1#

class Solution
{
public:
  string ExcelColumn(int N)
  {
    // Your code goes here
    string res;
    while (N > 0)
    {
      if (N % 26 == 0)
      {
        res += 'Z';
        N = N / 26 - 1;
      }
      else
      {
        res += (N % 26) - 1 + 'A';
        N = N / 26;
      }
    }
    reverse(res.begin(), res.end());
    return res;
  }
};
