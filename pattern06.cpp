#include <iostream>
using namespace std;
//### No relation found

//pattern 3 with while
// 1
// 22
// 333
// 4444


int main (){
// else input 
int n=4;
int i=1;

while(i<=n){
  int j=1;
  while(j<=i){
    cout<<i;
    j++;
  }
  cout<<endl;
  i++;
}
return -1;
}