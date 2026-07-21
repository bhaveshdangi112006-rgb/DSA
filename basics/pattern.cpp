#include <iostream>
using namespace std;

int main()
{

    // 1. number pattern
    /*
    int n;
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << j << " ";
        }
        cout << endl;
    }
    */

    // 2. star pattern
    /*
    int n;
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << "*";
        }
        cout << endl;
    }
    */

    // 3. alphabets pattern printing
    /*
    int n=4;

    for(int i=1;i<=4;i++){
        char ch=65;

        for(char j=1;j<=n;j++){
            cout << ch;
            ch = ch + 1;
        }
        cout << endl;
    }
    */

    // 4. number pattern
    /*
    int n=3,k=1;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << k;
            k++;
        }
        cout << endl;
    }
    */

    // 5. alphabet pattern
    /*
    int n=3;
    char ch=65;

    for(int i=1;i<=n;i++){
        for(char j=1;j<=n;j++){
            cout << ch;
            ch = ch + 1;
        }
        cout << endl;
    }
    */

    // 6. star pattern

    // int n=4;

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }


    //7. number triagle pattern
//     int n=4;
//     for(int i=1;i<=n;i++){
//       for(int j=1;j<=i;j++){
//        cout<<i<<" ";
//       }
//    cout<<endl;
//     }
//     return 0;
    

//8. aplhabet triangle pattern
// int n=5;
// char ch=65;
// for(int i=1;i<=n;i++){
//     for (int j = 1; j <=i; j++)
//     {
//         cout<<ch;
//     }
//     ch++;
//     cout<<endl;
// }
  

//9. number triangle pattern
// int n=4;
// for(int i=1;i<=n;i++){
//     for (int j = 1; j <=i; j++)
//     {
//        cout<<j<<" "; 
//     }
//     cout<<endl;
// }

//10.   reverse number pattern
// int n=4;
// int k;
// for(int i=1;i<=n;i++){
//     k=i;
//     for (int j = 1; j <=i; j++)
//     {
        
//         cout<<k<<" ";
//         k--;

//     }
//     cout<<endl;
// }

// 11. floyd's triangle pattern
// int n=4;
// int k=1;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//      cout<<k<<" ";
//      k++;
//     }
// cout<<endl;
// }    

//12. floyd's character triangle pattern
// int n=4;
// char k=65;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//      cout<<k<<" ";
//      k++;
//     }
// cout<<endl;
// }

// 13. inverted triangle pattern
// int n=4;
// for (int i = 0; i <n; i++)
// {
//     for( int j=0;j<i;j++){
//         cout<<" ";
//     }
//      for( int j=0;j<n-i;j++){
//         cout<<(i+1);
        
//     }
//      cout<<endl;
// }

//14. inverted alphabets triangle pattern
//  int n=4;
//   char ch=65;
// for (int i = 0; i <n; i++)
// {
//     for( int j=0;j<i;j++){
//         cout<<" ";
//     }
//      for( int j=0;j<n-i;j++){
//         cout<<ch;
        
//     }
//     ch++;
//      cout<<endl;
// }

//15. pyramid pattern
// int n=4;
// for(int i=1;i<=n;i++){
//     for(int j=n-1;j>=i;j--){
//         cout<<" ";
//     }
//     for(int j=1;j<=i;j++){
//         cout<<j;
//     }

//     for(int j=i-1;j>=1;j--){
//         cout<<j;
//     }
//     cout<<endl;
// }

//16. hollow pyramid pattern
int n=4;
for(int i=1;i<=n;i++){
    for(int j=n-1;j>=i;j--){
        cout<<" ";
    }
    cout<<"*";
    for(int j=1;j<=2*(i-1);j++){
            cout<<" ";

    }
        if(i!=1){
      cout<<"*";
        }
 
    cout<<endl;

}
}