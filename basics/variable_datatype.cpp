#include<iostream>
using namespace std;
int main(){
    int a=32;
    float b=23.433;
    float c=a*b;
    cout<<sizeof(c)<<endl;
    char grade='a';
    bool isEducated=true;
    bool isEligible=false;
    cout<<grade<<endl;
    cout<<isEducated<<endl;
    cout<<sizeof(isEligible)<<endl;
    // type casting
    int new_a=grade;
    int new_b=(int)b;
    cout<<new_a<<endl;
    cout<<new_b;
    return 0;
}