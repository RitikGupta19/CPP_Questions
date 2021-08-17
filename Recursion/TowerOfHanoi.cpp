class Solution
{
public:
  // You need to complete this function

  // avoid space at the starting of the string in "move disk....."
  long long toh(int n, int from, int to, int aux)
  {
    // Your code here
    int res1 = 0, res2 = 0;
    if (n == 1)
    {
      cout << "move disk " << n << " from rod " << from << " to rod " << to << endl;
      return 1;
    }
    res1 = toh(n - 1, from, aux, to);
    cout << "move disk " << n << " from rod " << from << " to rod " << to << endl;
    res2 = toh(n - 1, aux, to, from);
    return res1 + res2 + 1;
  }
};
