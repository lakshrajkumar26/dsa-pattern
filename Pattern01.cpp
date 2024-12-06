#include <iostream>
using namespace std;
//pattern 1 with while
// 111
// 222
// 333

int main (){
// else input 
int n=3;
int i=1;

while(i<=n){
  int j=1;
  while(j<=n){
    cout<<i;
    j++;
}
cout<<endl;
i++;
}
return -1;
}