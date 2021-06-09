class Solution
{
public:
  //Function to convert an infix expression to a postfix expression.
  int prec(char c)
  {
    if (c == '^')
      return 3;
    else if (c == '*' || c == '/')
      return 2;
    else if (c == '+' || c == '-')
      return 1;
    else
      return -1;
  }

  string infixToPostfix(string s)
  {
    // Your code here
    stack<char> st;
    string res;
    int len = s.length();
    for (int i = 0; i < len; i++)
    {
      if (isalpha(s[i]))
      {
        res = res + s[i];
      }
      else
      {
        if (s[i] == ')')
        {
          while (!st.empty() && st.top() != '(')
          {
            res = res + st.top();
            st.pop();
          }
          st.pop();
        }
        else if (st.empty() || s[i] == '(' || prec(s[i]) > prec(st.top()))
        {
          st.push(s[i]);
        }
        else if (prec(s[i]) <= prec(st.top()))
        {
          while (!st.empty() && (prec(s[i]) <= prec(st.top())))
          {
            res = res + st.top();
            st.pop();
          }
          st.push(s[i]);
        }
      }
    }
    while (!st.empty())
    {
      res = res + st.top();
      st.pop();
    }
    return res;
  }
};
