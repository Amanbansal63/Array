<<<<<<< HEAD
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
=======
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
>>>>>>> f40c8baccd389994fae612fc78e2ad98086096d1
}