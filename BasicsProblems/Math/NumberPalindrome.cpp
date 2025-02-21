#include<iostream>
using namespace std;
int main(){
    int num=4564;
    int rev=0;
    int copy=num;
    while(copy > 0){
        int ld = copy%10;
        rev=rev*10+ld;
        copy=copy/10;
    }
    cout<<rev<<endl;

    if(rev==num){
        cout<<"Its a Palindrome";
    }
    else{
        cout<<"Its not a Palindrome";
    }
}