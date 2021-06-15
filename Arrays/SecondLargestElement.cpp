class Solution
{
public:
  int print2largest(int arr[], int n)
  {
    int i, res = -1, largest = 0;
    for (i = 1; i < n; i++)
    {
      if (arr[i] > arr[largest])
      {
        res = largest;
        largest = i;
      }
      else if (arr[i] != arr[largest])
      {
        if (res == -1 || arr[i] > arr[res])
        {
          res = i;
        }
      }
    }
    return res == -1 ? -1 : arr[res];
  }
};
