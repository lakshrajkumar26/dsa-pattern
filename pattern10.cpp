    

#include <iostream>
using namespace std;

//pattern 9 with while
// A
// BB
// CCC



int main (){
// else input 
int n=4;
int i=1;

while(i<=n){
  int j=1;
  while(j<=i){
    char ch='A'+i-1;
    cout<<ch;
    j++;
  }
  cout<<endl;
  i++;;
}


return -1;
}