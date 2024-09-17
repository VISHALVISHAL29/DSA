#include <iostream>
using namespace std;

// Helper function to generate the series
void gfHelp(int N, long i, long j) {
    if (N == 0) {
        return;
    }
    cout << i << " ";
    long next = i * i - j;
    gfHelp(N - 1, j, next);
}

// Function to initiate the series generation
void gfSeries(int N)
{
    gfHelp(N, 0, 1);
}

int main()
{
    int N = 14;
    gfSeries(N);
    return 0;
}

