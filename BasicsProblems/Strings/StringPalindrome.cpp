#include<iostream>
using namespace std;
int main(){
    string name="mom";
    int size=name.length();
    int pointer1=0,pointer2=size-1;
    bool isPalindrome = true;
    while(pointer1<pointer2){
        if(name[pointer1]!= name[pointer2]){
            isPalindrome=false;
            break;
        }
        pointer1++;
        pointer2--;
    }
    if(isPalindrome)
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome";

    return 0;
}