// https://practice.geeksforgeeks.org/problems/consecutive-elements2306/1#

class Solution
{
public:
  string removeConsecutiveCharacter(string S)
  {
    // code here.
    stack<char> s;
    string res;
    int i = 0;
    s.push(S[i++]);

    while (S[i] != '\0')
    {
      if (s.top() != S[i])
      {
        s.push(S[i]);
      }
      i++;
    }

    while (!s.empty())
    {
      res = s.top() + res;
      s.pop();
    }
    return res;
  }
};
