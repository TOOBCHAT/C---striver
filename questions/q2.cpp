#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"number of elements you want in the array:"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int largest =arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
int slargest = -1;
 for(int i=0;i<n;i++){
        if(arr[i]>slargest && slargest!=largest ){
            slargest=arr[i];
        }
}
cout<<"second largest element is :"<<slargest;
}