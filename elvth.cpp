#include<iostream>
using namespace std;
int main(){
    char h;
    cout << "enter charcter:";
    cin>> h;
    if (h<='A'&& h>='Z'){
        cout<<"uppercase\n";

    }
    else{
        cout<<"lowercase\n";
    }
    return 0;
}