//printing first N natural numbers

#include<bits/stdc++.h>
using namespace std;

void number(int i,int n){
if(i>n){
    return;
}
else{
    cout<< i<<endl;
    i++;
    number(i,n);
}
}
int main(){
    int n;
    cout<<"number of elemtnts you want to print=";
    cin>>n;
    number(1,n);
    return 0;
}
    
