#include <iostream>
using namespace std;
int main(){
    // int age;
    // cout<<"enter your age"<<endl;
    // cin>>age;
    // if(age>18){
    //     cout<<"you are eligible to vote"<<endl;
    // }else{
    //     cout<<"sorry you can't!!";
    // }
    char ch;
    cout<<"enter the character";
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"lowercase";
    }else{
        cout<<"uppercase";
    }
    return 0;
}
