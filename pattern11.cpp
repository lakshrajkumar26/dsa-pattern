    

#include <iostream>
using namespace std;
//### alter relation formula
//char ch='A'+j-1

//pattern 8 with while
// ABC
// ABC
// ABC



int main (){
// else input 
int n=3;
int i=1;


while(i<=n){
  int j=1;
  while(j<=n){
    char ch='A'+j-1;
    cout<<ch;
    j++;
  }
  cout<<endl;
  i++;;
}


return -1;
}