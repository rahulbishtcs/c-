#include <bits/stdc++.h>

using namespace std;

int getmax (int arr[], int size)
{
  int m = INT_MIN;
  for (int i = 0; i < size; i++)
    {
      if (arr[i] > m)
	{
	  m = arr[i];
	}
    }
  return (m);
}

int getmin (int arr[], int size)
{
  int m = INT_MAX;
  for (int i = 0; i < size; i++)
    {
      if (arr[i] < m)
	{
	  m = arr[i];
	}
    }
  return (m);
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
  max = getmax (arr, size);
  min = getmin (arr, size);
  cout << "Max: " << max << endl;
  cout << "Min: " << min;
  return 0;
}
