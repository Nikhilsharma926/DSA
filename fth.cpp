#include<iostream>
using namespace std;
int main (){
    int a, b;
    char operation;

    cout <<"enter the first number:";
    cin >>a;
    cout <<"enter the second number:";
    cin >>b;
    cout <<"enter any opertion what you want(/,+,*,%,-):";
    cin>> operation;

switch (operation)
{
case '/' :
    cout<<"result:"<< a/b ;
    break;
case '+' :
    cout<<"result:"<< a+b ;
    break;
case '*' :
    cout<<"result:"<< a*b ;
    break;
case '%' :
    cout<<"result:"<< a%b ;
    break; 
case '-' :
    cout<<"result:"<< a-b ;
    break; 
default:"invalid error";
    break;

    return 0;
}

}