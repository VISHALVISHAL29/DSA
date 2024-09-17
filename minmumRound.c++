#include<iostream>
#include <vector>
#include <unordered_map>
using namespace std;



 int minimumRounds(vector<int>& tasks) {
    unordered_map<int,int> map;
    int count = 0;
    for(int i = 0 ; i<tasks.size();i++){
       if(map[tasks[i]]){
          map[tasks[i]] = count + 1;
       }
       map[tasks[i]] = count;
    }
        
    }

int main()
{  
    vector<int> task = {2,2,3,3,2,4,4,4,4,4};
    return 0;
}