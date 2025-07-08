#include<iostream>
// #include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={1,2,3,4,5};
int n=sizeof(arr)/sizeof(arr[0]);
int* ptr=arr;
for(int i=0;i<n;i++){
    cout<<ptr[i]<<" ";
}
cout<<endl;
cout<<ptr;
}