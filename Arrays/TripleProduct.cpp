// https://www.geeksforgeeks.org/count-number-triplets-product-equal-given-number/

#include <bits/stdc++.h>
using namespace std;

// Function to count such triplets
int countTriplets(int arr[], int n, int m)
{
  // Store all the elements in a set
  unordered_map<int, int> occ;
  for (int i = 0; i < n; i++)
    occ[arr[i]] = i;

  int count = 0;

  // Consider all pairs and check for a
  // third number so their product is equal to m
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      // Check if current pair divides m or not
      // If yes, then search for (m / arr[i]*arr[j])
      if ((arr[i] * arr[j] <= m) && (arr[i] * arr[j] != 0) && (m % (arr[i] * arr[j]) == 0))
      {
        int check = m / (arr[i] * arr[j]);
        auto it = occ.find(check);

        // Check if the third number is present
        // in the map and it is not equal to any
        // other two elements and also check if
        // this triplet is not counted already
        // using their indexes
        if (check != arr[i] && check != arr[j] && it != occ.end() && it->second > i && it->second > j)
          count++;
      }
    }
  }

  // Return number of triplets
  return count;
}

// Drivers code
int main()
{
  int arr[] = {1, 4, 6, 2, 3, 8};
  int n = sizeof(arr) / sizeof(arr[0]);
  int m = 24;

  cout << countTriplets(arr, n, m);

  return 0;
}
