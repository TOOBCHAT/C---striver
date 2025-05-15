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
cout<<"laregst element in the array is :"<<largest;
}