//this is for a interger array

#include<iostream>
using namespace std;
int main(){
    int num= 98765;
    int rev=0;
    while(num>0){
        int ld=num%10;
        rev=rev*10+ld;
        num=num/10;
    }
    cout<<rev;
}

//this is for string array

/* #include<iostream>
using namespace std;
int main(){
    string name="shara";
    int size=name.length();
    int pointer1=0, pointer2=size-1;
    while(pointer1<=pointer2){
        char ch=name[pointer1];
        name[pointer1]=name[pointer2];
        name[pointer2]=ch;
        pointer1++;
        pointer2--;
    }
    cout<<name;
} */