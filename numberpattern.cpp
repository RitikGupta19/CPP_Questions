/*    
        1
      1   2
    1   2   3
  1   2   3  4
1   2   3   4  5

*/

#include <iostream>
using namespace std;

int main()
{
  int i, j, n;
  cin >> n;

  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= 2 * n - 2 * i; j++)
    {
      cout << " ";
    }
    for (j = 1; j <= i; j++)
    {
      cout << j << "   ";
    }
    cout << endl;
  }
  return 0;
}
