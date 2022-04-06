#include <bits/stdc++.h>

using namespace std;

void revArray (int arr[], int size)
{
  int n = size - 1;
  for (int i = 0; i < size / 2; i++)
    {
      int t = arr[n];
      arr[n] = arr[i];
      arr[i] = t;
      n--;
    }
  for (int i = 0; i < size; i++)
    {
      cout << arr[i];
    }
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

  revArray (arr, size);
  return 0;
}
