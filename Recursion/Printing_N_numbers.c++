#include<iostream>
using namespace std;

int Decrasing(int n){
    if(n==0){
       return 0;
    }
    cout<<n<<" ";
    Decrasing(n-1);
}

int Increasing(int n){

  if(n==0){
    return 0;
  }
  
  Increasing(n-1);
   cout<<n<<" ";
   
}

int main()
{
    Decrasing(5);
    cout<<endl;
    Increasing(5);
    return 0;
}