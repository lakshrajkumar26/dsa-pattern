    

#include <iostream>
using namespace std;
//### alter relation formula
//char ch='A'+i +j-2

//pattern 8 with while
// A
// BC 
// CDE
// DEFG



int main (){
// else input 
int n=4;
int i=1;


while(i<=n){
  int j=1;
  while(j<=i){
    char count=('A'+i +j-2);
    cout<<count;
    j++;
  }
  cout<<endl;
  i++;;
}


return -1;
}