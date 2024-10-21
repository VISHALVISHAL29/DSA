#include<bits/stdc++.h>
using namespace std;

void lcs(string x, string y, int c[][100], int b[][100])
{
    int m = x.length();
    int n = y.length();
    
    for(int i=0; i<=m; i++)
    {
        c[i][0] = 0;
    }
    for(int j=0; j<=n; j++)
    {
        c[0][j] = 0;
    }

    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(x[i-1] == y[j-1])
            {
                c[i][j] = c[i-1][j-1] + 1;
                b[i][j] = 1; 
            }
            else
            {
                if(c[i-1][j] > c[i][j-1])
                {
                    c[i][j] = c[i-1][j];
                    b[i][j] = 2;
                }
                else
                {
                    c[i][j] = c[i][j-1];
                    b[i][j] = 3;
                }
            }
        }
    }
}

void printLCS(int b[][100], string x, int i, int j)
{
    if (i == 0 || j == 0) return;
    
    if (b[i][j] == 1) 
    {
        printLCS(b, x, i-1, j-1);
        cout << x[i-1]; 
    }
    else if (b[i][j] == 2) 
    {
        printLCS(b, x, i-1, j);
    }
    else 
    {
        printLCS(b, x, i, j-1);
    }
}

int main() {
    string x = "ABCBDAB";
    string y = "BDCABA";
    
    int m = x.length();
    int n = y.length();

    int c[100][100], b[100][100];
    lcs(x, y, c, b);

    cout << "Length of LCS: " << c[m][n] << endl;

    cout << "LCS Sequence: ";
    printLCS(b, x, m, n);
    cout << endl;

    return 0;
}

