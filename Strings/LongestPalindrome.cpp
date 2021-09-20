// https://practice.geeksforgeeks.org/problems/longest-palindrome-in-a-string3411/1#

class Solution
{
public:
  string longestPalin(string s)
  {
    // Declare DP Table
    int n = s.size();
    int maxLen = 1, start = 0;
    bool dp[n][n];
    memset(dp, 0, sizeof(dp));

    // Assigning 1 value at diagnol
    // For length 1 substring
    for (int i = 0; i < n; i++)
    {
      dp[i][i] = true;
    }

    int first = 0;
    // Checking for length 2 substring
    for (int i = 0; i < n - 1; i++)
    {
      if (s[i] == s[i + 1])
      {
        dp[i][i + 1] = true;
        if (!first)
        {
          start = i;
          maxLen = 2;
          first = 1;
        }
      }
    }

    // Length 3 Substring
    for (int k = 3; k <= n; k++)
    {
      for (int i = 0; i < n - k + 1; i++)
      {
        int j = i + k - 1;

        if (s[i] == s[j] && dp[i + 1][j - 1])
        {
          dp[i][j] = true;

          if (k > maxLen)
          {
            maxLen = k;
            start = i;
          }
        }
      }
    }

    string res;
    for (int i = start; i < (start + maxLen); i++)
    {
      res = res + s[i];
    }

    return res;

    // int start = 0, maxLen = 1;
    // int n = s.size();
    // for(int i = 0; i < n - 1; i++){
    //     for(int j = i; j < n; j++){
    //         int flag = 1;
    //         for(int k = 0; k < (j - i + 1) / 2; k++){
    //             if(s[i + k] != s[j - k]){
    //                 flag = 0;
    //             }
    //         }

    //         if(flag && (j - i + 1) > maxLen){
    //             maxLen = j - i + 1;
    //             start = i;
    //         }
    //     }
    // }

    // string res;
    // for(int i = start; i < (start + maxLen); i++){
    //     res = res + s[i];
    // }

    // return res;
  }
};
