class Solution
{
public:
  // anagram search
  // finds whether these arrays are anagram or not
  bool isSame(int arr1[], int arr2[])
  {
    for (int i = 0; i < 256; i++)
    {
      if (arr1[i] != arr2[i])
        return false;
    }
    return true;
  }

  int search(string pat, string txt)
  {
    // code here
    int countTxt[256] = {0}, count[256] = {0};
    int i, res = 0;
    // makes first text window and patter window counts
    for (i = 0; i < pat.length(); i++)
    {
      countTxt[txt[i]]++;
      count[pat[i]]++;
    }

    for (i = pat.length(); i <= txt.length(); i++)
    {
      // checking first window with pattern
      if (isSame(countTxt, count))
      {
        res++;
      }
      // add next character in window
      countTxt[txt[i]]++;
      // removes the first character in window
      countTxt[txt[i - pat.length()]]--;
    }
    return res;
  }
};
