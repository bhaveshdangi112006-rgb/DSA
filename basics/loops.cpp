#include<iostream>
using namespace std ;
int main()
{
// int sum=0,i,num;
// cout<<"enter a number"<<endl;
// cin>>num;
// for(i=1;i<=num;i++){
//   if(i%2!=0){
//     sum+=i;
//   }
// }
// cout<<"sum"<<sum<<endl;
// bool isPrime=false;
// int num,i;
// cout<<"enter number to find prime number"<<endl;
// cin>>num;
// if(num>=2)
// for(i=2;i*i<=num;i++){
//     if(num%i==0){
//         isPrime=false;
//         break;
//     }else{
//         isPrime=true;
//     }
// }
// if(isPrime==true ){
//     cout<<"the number is prime for real"<<endl;
// }else{
//     cout<<"the given number is not prime"<<endl;
// }
int i,j,side;
cout<<"enter the side value"<<endl;
cin>>side;
for(i=1;i<=side;i++){
    for(j=1;j<=side;j++){
    cout<<"*";
    }
    cout<<endl;
}
return 0;
} 
