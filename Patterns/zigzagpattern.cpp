/*

  *   *
 * * * *
*   *   *

Here the approch was to see the index and sum relation, if found
here the relation was sum was divisible by 4, except 2 places that were (i,j) =>
i  = 2 and j % 4 == 0
*/

#include <iostream>
using namespace std;

int main()
{
  int i, j, n;
  cin >> n;

  for (i = 1; i <= 3; i++)
  {
    for (j = 1; j <= n; j++)
    {
      if ((i + j) % 4 == 0 || (i == 2 && j % 4 == 0))
      {
        cout << "*";
      }
      else
      {
        cout << " ";
      }
    }
    cout << endl;
  }
  return 0;
}
