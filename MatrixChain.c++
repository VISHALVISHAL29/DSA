#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  void chaninMatrix(int arr[], int N, int m[100][100], int s[100][100])
  {
    int n = N - 1; 
    for (int i = 1; i <= n; i++)
    {
      m[i][i] = 0; 
    }

    for (int l = 2; l <= n; l++)
    { 
      for (int i = 1; i <= n - l + 1; i++)
      {
        int j = i + l - 1; 
        m[i][j] = INT_MAX; 
        for (int k = i; k < j; k++)
        {
          int q = m[i][k] + m[k + 1][j] + arr[i - 1] * arr[k] * arr[j]; 
          if (q < m[i][j])
          {
            m[i][j] = q;
            s[i][j] = k; 
          }
        }
      }
    }
  }

  void order(int s[100][100], int i, int j)
  {
    if (i == j)
    {
      cout << "M" << i;
    }
    else
    {
      cout << "(";
      order(s, i, s[i][j]);
      order(s, s[i][j] + 1, j);
      cout << ")";
    }
  }

public:
  void PrintMAtirx(int m[100][100], int s[100][100], int n)
  {
    cout << "Matrix M:" << endl;
    for (int i = 1; i < n; i++)
    {
      for (int j = 1; j < n; j++)
      {
        if (i <= j)
        {
          cout << m[i][j] << "\t";
        }
        else
        {
          cout << "-\t";
        }
      }
      cout << endl;
    }

    cout << "\nMatrix S:" << endl;
    for (int i = 1; i < n; i++)
    {
      for (int j = 1; j < n; j++)
      {
        if (i <= j)
        {
          cout << s[i][j] << "\t";
        }
        else
        {
          cout << "-\t";
        }
      }
      cout << endl;
    }
  }
};
int main()
{
  int arr[] = {5,10,6,4,5};
  int n = sizeof(arr) / sizeof(arr[0]);
  int m[100][100];
  int s[100][100];
  Solution obj;
  obj.chaninMatrix(arr, n, m, s);

  obj.PrintMAtirx(m, s, n);

   cout << "Optimal Parenthesization: ";
    obj.order(s, 1, n - 1); // Print the optimal order of multiplication
    cout << endl;

  return 0;
}