#include <bits/stdc++.h>

using namespace std;

void sumArray (int arr[], int size)
{
  int sum = 0;
  for (int i = 0; i < size; i++)
    {
      sum += arr[i];
    }
  cout << sum;
}

int main ()
{
  int size, arr[100];
  int max, min;
  cin >> size;
  for (int i = 0; i < size; i++)
    {
      cin >> arr[i];
    }

  sumArray (arr, size);
  return 0;
}
