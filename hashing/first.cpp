#include<bits/stdc++.h>
using namespace std;

int main(){
    //input to an array
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }

int arr[5]={1,2,1,3,2};
//precompute-
 int hash[13]={0};
 for(int i=0;i<4;i++){
    hash[arr[i]]+=1;
 }
 
cout<<"number of times 1 appear in the array="<<hash[1];  //example fetch


}