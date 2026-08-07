#include <iostream>
#include <algorithm>
#include <string>
#include <bits/stdc++.h>
using namespace std;
// print from 1 to n using backtracking
// void print(int i,int n){
//     if(i<1){
//         return;
//     }
//     print(i-1,n);
//     cout<<i<<endl;
// }

// print from n to 1 by backtracking
//  void print(int i,int n){
//      if(i<1){
//          return;
//      }
//      print(i-1,n);
//      cout<<n-i+1<<endl;
//  }

// sum of n number using recursion (parametrized way)
//  void sum(int i,int total){
//  if(i<1){
//      cout<<total<<endl;
//      return;
//  }
//  sum(i-1,total+i);
//  }

// sum of n number using function way recrsion
//  int sum(int n){
//      if(n==1){
//          return 1;
//      }
//      return n+sum(n-1);
//  }

// factorial by parameter
//  void faact(int i,int res){
//   if(i<=1){
//      cout<<res;
//      return;
//   }
//   faact(i-1,res*i);
//  }

// factorial by fuction way
//  int fact(int n){
//      if(n==1){
//          return 1;
//      }
//      return n*fact(n-1);
//  }

// reverse a array using recursion (using 2 variable)
// void arrayReverse( int arr[],int l,int r){
//     if(l>=r){
//         for(int i=0;i<5;i++){
//             cout<<arr[i]<<endl;
//         }
//         return;
//     }
//  arr[l]=arr[l]+arr[r];
//  arr[r]=arr[l]-arr[r];
//   arr[l]=arr[l]-arr[r];
//   arrayReverse(arr,l+1,r-1);
// }

// reverse a array using recursion (using 1 variable)
//  void arrayReverse( int arr[],int i){
//      if(i>=5/2){
//          for(int i=0;i<5;i++){
//              cout<<arr[i]<<endl;
//          }
//          return;
//      }
//      swap(arr[i],arr[5-i-1]);
//    arrayReverse(arr,i+1);
//  }

// check the pelidrome using the recursion
//  bool palidrome(string s ,int i){
//    if(i>=s.length()/2){
//    return true;
//    }
//    if(s[i]!=s[s.length()-i-1]){
//      return false;
//    }
//      return palidrome(s,i+1);
//  }

// fibbonocci number using multiple recursion
// int fibonocci(int n)
// {
//     if (n <= 1)
//     {
//         return n;
//     }
//     return fibonocci(n - 1) + fibonocci(n - 2);
// }

//print all sybsequences
// void printSub(int i, vector<int> &ds,int arr[],int n){
//     if(i>=n){
//         for(auto x:ds)
//         cout<<x<<" ";
//         cout<<endl;
//     return;
//     }
//     ds.push_back(arr[i]);
//     printSub(i+1,ds,arr,n);
//     ds.pop_back();
//     printSub(i+1,ds,arr,n);
//     return;
// }

//print all sybsequences whose sum i k
// void printSub(int i, vector<int> &ds,int arr[],int n,int s,int sum){
//     if(i>=n){
//         for(auto x:ds)
//         if(sum==s){
//             cout<<x<<" ";
//         }
//         cout<<endl;
//     return;
//     }
//     ds.push_back(arr[i]);
//     s+=arr[i];
//     printSub(i+1,ds,arr,n,s,sum);
//     ds.pop_back();
//     s-=arr[i];
//     printSub(i+1,ds,arr,n,s,sum);
//     return;
// }

//print only one sub sequence whose sm is k
bool printSub(int i, vector<int> &ds,int arr[],int n,int s,int sum){
    if(i>=n){
        for(auto x:ds)
        if(sum==s){
            cout<<x<<" ";
            return true;
        }
        cout<<endl;
    return false;
    }
    ds.push_back(arr[i]);
    s+=arr[i];
   if( printSub(i+1,ds,arr,n,s,sum)==true){
    return true;
   }
    ds.pop_back();
    s-=arr[i];
    if(printSub(i+1,ds,arr,n,s,sum)==true){
return true;
    }
    return false;
}
int main()
{
    // int n;
    // cout<<"enter the number";
    // cin>> n;
    // print(n,n);
    //   sum(n,0);
    // cout<<sum(n);
    // // faact(n,1);
    // cout<<fact(n);
    // int arr[5]={1,2,3,4,5};
    // int l=0,r=4;
    // arrayReverse(arr,l,r);
    // arrayReverse(arr,0);
    // string str="madan";
    // cout<<palidrome(str,0);
    // cout << fibonocci(3);
     int n=3;
      int arr[n]={3,1,2};
      int sum=3;
     vector<int>ds;
    //  printSub(0,ds,arr,n);
    printSub(0,ds,arr,n,0,sum);
    return 0;
}