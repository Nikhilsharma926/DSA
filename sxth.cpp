#include<iostream>
using namespace std;
int main(){
    double rate, principal ,simpleInterest, time;
    cout <<"enter the principal:";
    cin>> principal;
    cout << "enter the Rate:";
    cin>> rate;
    cout <<"enter the Time:";
    cin>> time;

    simpleInterest = (principal*time*rate)/100;
    cout<<"simpleInterest :" <<simpleInterest;
    return 0;



}