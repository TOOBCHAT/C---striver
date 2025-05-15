#include<bits/stdc++.h>
using namespace std;

vector<int> alternateNumbers(vector<int>&a) {
    int n1=a.size();
    int arrp[n1/2];
    int arrn[n1/2];
    int p=0, n=0;
    for(int i=0;i<n1;i++){
        if(a[i]>=0){
            arrp[p++] = a[i];
        }
        if(a[i]<0){
            arrn[n++]=a[i];
        }
    }
    for(int i=0;i<n1;i++){
        a[2*i]=arrp[i];
        a[2*i+1]=arrn[i];
    }
    
    for(int i=0;i<n1;i++){
        cout<<a[i]<<" ";
    }
    return a;
    
}

int main(){
    vector<int> a={3,1,-2,-5,2,-4};
    alternateNumbers(a);
}