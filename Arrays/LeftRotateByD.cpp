#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
}

void reverse(int arr[], int l, int h)
{
  while (l <= h)
  {
    swap(arr[l], arr[h]);
    l++;
    h--;
  }
}

int main()
{
  //code
  int t;
  cin >> t;
  while (t--)
  {
    int n, d;
    cin >> n >> d;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);
    reverse(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
      cout << arr[i] << " ";
    }
    cout << endl;
  }
  return 0;
}
