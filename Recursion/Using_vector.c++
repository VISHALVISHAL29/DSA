#include<iostream>
#include<vector>
using namespace std;


vector<int> RrecursionHelp(vector<int> v,int index){
    if(index >= v.size()){
        return v;
    }
    index++;
   vector<int> v1(v.begin()+1,v.end());
     
}
vector<int> Rrecursion(vector<int> v){
     
}
int main()
{
    vector<int> vect = {1,2,3,4,5,56};
    // vect.push_back(12);
    // cout<<vect.capacity()<<" ";
    // cout<<vect.size();
    cout<<*vect.begin();
    return 0;
}

