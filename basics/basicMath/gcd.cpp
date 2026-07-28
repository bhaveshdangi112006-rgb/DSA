#include <iostream>
#include <algorithm>
using namespace std;
//common brute force method
/*mint gcd(int n1,int n2){
    int hcf=1;
for(int i=1;i<=min(n1,n2);i++){
if(n1%i==0 && n2%i==0){
  hcf=i;
}
}
return hcf;
} */


//optimal solution
//Euclidean Algorithm:
// 2 NUMBER ALWAYS MODULER TO GREATER NUMBER UNTIL ANYONE IS 0
int euclidean(int n1,int n2){
while(n1>0 && n2>0){
    if(n1>n2){
        n1=n1%n2;}else{
    n2=n2%n1;
}
}
if(n1==0){
    return n2;
}else{
    return n1;
}
}
int main(){
// cout<<gcd(12,15)<<endl;
cout<<euclidean(12,15)<<endl;
}