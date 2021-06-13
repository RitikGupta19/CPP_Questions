class Solution
{
public:
  void pushZerosToEnd(int arr[], int n)
  {
    int i, count = 0;
    for (i = 0; i < n; i++)
    {
      if (arr[i] != 0)
      {
        int temp = arr[i];
        arr[i] = arr[count];
        arr[count] = temp;
        count++;
      }
    }
  }
};
