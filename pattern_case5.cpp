#include<bits/stdc++.h>
using namespace std;
void pattern0(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";      
        }
        for(int j=0;j<i*2 + 1;j++){
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";      
        }
    cout<<endl;
   }
   

}
int main(){
    int t;
    cout<<"enter the numnber of test cases";
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cout<<"enter the number of lines";
        cin>>n;
        
        pattern0(n);
    }
}
