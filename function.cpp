#include<iostream>

using namespace std;
int addition(int m,int n){
        return m+n;
    }
int square(int x){
    return x*x;
}    

 int main(){
    for(int i=1;i<=5;i++){
        cout<<square(i)<<"\n";
    }
    int m,n;
    cout<<addition(8,9);
    return 0;

 }