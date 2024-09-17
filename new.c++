#include <bits/stdc++.h>
using namespace std;

int main(){int G, S, B;
    cin >> G >> S >> B;
    
    int gold_needed = max(0, 5 - G);
    int silver_needed = max(0, 5 - S);
    int bronze_needed = max(0, 5 - B);
    
    int total_needed = gold_needed + silver_needed + bronze_needed;
    
    cout << total_needed << endl;
    
    return 0;}