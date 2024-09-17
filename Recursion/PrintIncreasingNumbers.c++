#include<iostream>
#include<vector>
using namespace std;

vector<int> vect;


void PrintHelp(int n) {
    if (n == 0) {
        return;
    }
    PrintHelp(n - 1);
    vect.push_back(n);
}
vector<int> PrintNumebr(int n){
    PrintHelp(n);
    return vect;
}

int main() {
    int n = 9;
    vector<int> result = PrintNumebr(n);
    
    // Print the result for verification
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}