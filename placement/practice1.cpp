#include<iostream>
using namespace std;
int main(){
    int num,onum ,rem, rev;
    cout<<"enter a number :";
    cin>>num;
    num = onum;
    while (num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }

    if(num==rev){
        cout<<"palidrome no..";
    }
    else{
        cout<<"not a palidrome no.";
    }


}