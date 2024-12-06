#include <iostream>
using namespace std;
//### No relation found

//pattern 5 with while
// *
// **
// ***
// ****


int main (){
// else input 
int n=4;
int i=1;

while(i<=n){
  int j=1;
  while(j<=i){
    cout<<"*";
    j++;
  }
  cout<<endl;
  i++;
}

return -1;
}