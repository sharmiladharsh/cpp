#include<iostream>
using namespace std;
int main(){
    string name="Shara5257Sharmi";
    int size=name.length();
    int sum=0;
    for(int i=0;i<=size-1;i++){
        if(name[i]>='0' && name[i]<='9'){
            sum+=name[i]-'0';
        }
    }
    cout<<sum;
}