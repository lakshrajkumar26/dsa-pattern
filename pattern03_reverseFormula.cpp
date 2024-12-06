#include <iostream>
using namespace std;
//###FORMULA for reverse PRINTING ### n-j+1

//pattern 3 with while
// 321
// 321
// 321


int main (){
// else input 
int n=3;
int i=1;

while(i<=n){
  int j=1;
  while(j<=n){
    cout<<n-j+1;
    j++;
  }
  cout<<endl;
  i++;
}

return -1;
}