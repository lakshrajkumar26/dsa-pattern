#include <iostream>
using namespace std;
//### No relation found

//pattern 3 with while
// 1
// 23
// 456
// 78910


int main (){
// else input 
int n=4;
int i=1;
int count=1;

while(i<=n){
  int j=1;
  while(j<=i){
    cout<<count;
    count++;
    j++;
  }
  cout<<endl;
  i++;;
}


return -1;
}