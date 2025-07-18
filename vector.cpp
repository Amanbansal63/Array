#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v={1,2,3,4};
    // for(int i=0;i<v.size();i++){
        
    //     cout<<v[i];
    // }
    cout<<endl;
    for(int j=v.size()-1;j>=0;j--){
        cout<<v[j];
    }
    // reverse(v.begin(),v.end());
    // for(int i=0;i<v.size();i++){
        
    //     cout<<v[i];
    // }
//     int i=0;
//     int j=v.size();
//    =for(int i=0;i<v.size();i++){
        
//         cout<<v[i];
//     }

    return 0;
}