#include <iostream>
using namespace std;
//### alter relation formula i-j+1

//pattern 8 with while
// 1
// 21
// 321
// 4321


int main (){
// else input 
int n=4;
int i=1;

while(i<=n){
  int j=1;
  while(j<=i){
    cout<<i-j+1;
    j++;
  }
  cout<<endl;
  i++;;
}


return -1;
}