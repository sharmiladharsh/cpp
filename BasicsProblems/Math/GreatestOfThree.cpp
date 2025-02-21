#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1=25,num2=15,num3=150;
    if(num1>num2 && num1>num3){
        cout<<"It is the Greatest Number: "<<num1 <<endl;
    }
    else if(num2>num3 && num2>num3){
        cout<<"It is the Greatest Number: "<<num2 <<endl;
    }
    else{
        cout<<"It is the Greatest Number: "<<num3 <<endl;
    }
}