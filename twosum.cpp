#include<iostream>
using namespace std;
int arr[]={2,5,7,15};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=9;
bool twosum(){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==x){
             return true;
            }
            else{
                return false;
            }
        }
    }
    }
int main(){
    cout<<twosum();
}