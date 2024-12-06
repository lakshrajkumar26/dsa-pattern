#include <iostream>
using namespace std;
//### No relation found

//pattern 4 with while
// 123
// 456
// 789


int main (){
// else input 
int n=3;
int i=1;
int count=1;

while(i<=n){
  int j=1;
  while(j<=n){
    cout<<count;
    count++;
    j++;
  }
  cout<<endl;
  i++;
}

return -1;
}