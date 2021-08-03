
class Solution
{
public:
  //Function to find the days of buying and selling stock for max profit.
  vector<vector<int>> stockBuySell(vector<int> a, int n)
  {
    // code here
    vector<vector<int>> res(n, vector<int>(2, -1));
    int i, low = 0, ind = 0;
    for (i = 1; i < n; i++)
    {
      if (a[i] > a[i - 1] && low == 0)
      {
        low = 1;
        res[ind][0] = i - 1;
      }
      else if (a[i] < a[i - 1] && low == 1)
      {
        low = 0;
        res[ind++][1] = i - 1;
      }
    }
    if (low == 1)
    {
      res[ind][1] = i - 1;
    }
    // if any iteration not performed
    if (res[0][0] == -1)
    {
      res.clear();
    }
    return res;
  }
};
