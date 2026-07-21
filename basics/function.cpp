#include <iostream>
using namespace std;
// 1. to find the minimum
// int minOfValue(int a,int b){
// if(a<b){
//     return a;
// }else{
//     return  b;
// }
// }

//2. to find sum of 1 to n number 
// int sum(int a){
//    int  sum=0;
//    for(int i=1;i<=a;i++){
//     sum+=i;
//    }
//    return sum;
// }

//3. to find the n factorial
int fact(int a){
   int  facto=1;
   for(int i=1;i<=a;i++){
    facto*=i;
   }
   return facto;
}

//4. find the  sum of paricular digit of  number 
// int sumOfDigit(int n){
//     int digit;
//     int sum=0;
//    while(n>0){
//     digit=n%10;
//     n=n/10;
//     sum+=digit;
//    }
//    return sum;
// }

//4.binomial

int main(){
// cout<< "min of value is "<<minOfValue(4,7)<<endl; 
// cout<<"the sum will be "<<sum(10)<<endl;
// cout<<"factorial is =" <<factorial(3)<<endl; 
// cout<<"the sum of paricular digit of number is  =   "<<sumOfDigit(1234)<<endl;
int n,r;
cout<<"enter n and r";
cin>>n>>r;
 int diff=n-r;
 int denominator=fact(r)*fact(diff);
 int binomialCoefficent=fact(n)/denominator;
cout<<binomialCoefficent<<endl;;
return 0;
}
