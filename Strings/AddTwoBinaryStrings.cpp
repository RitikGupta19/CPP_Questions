class Solution
{
public:
  void makeEqualLenghts(string &a, string &b)
  {
    int len1 = a.length() - 1;
    int len2 = b.length() - 1;
    int i = 0;

    if (len1 < len2)
    {
      while (i < len2 - len1)
      {
        a = '0' + a;
        i++;
      }
    }
    else
    {
      while (i < len1 - len2)
      {
        b = '0' + b;
        i++;
      }
    }
  }

  string addBinary(string A, string B)
  {
    // your code here
    if (A.length() != B.length())
    {
      makeEqualLenghts(A, B);
    }
    int carry = 0, i = A.length() - 1;
    string sum = "";

    while (i >= 0)
    {
      carry += (A[i] - '0') + (B[i] - '0');
      sum = (char(carry % 2 + '0')) + sum;
      carry = carry / 2;
      i--;
    }
    if (carry == 1)
    {
      sum = '1' + sum;
    }

    i = 0;
    while (sum[i] != '\0')
    {
      if (sum[i] == '0')
      {
        i++;
      }
      else
      {
        break;
      }
    }
    return sum.substr(i, sum.length());
  }
};
