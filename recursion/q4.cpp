// printing a from N to 1, without using i-- or i=i-1

#include<bits/stdc++.h>
using namespace std;

void number(int i,int n){
if(i>n){
    return;
}
else{

    i++;
    number(i,n);
    cout<< i<<endl;
    
}
}
int main(){
    int n;
    cout<<"number of elemtnts you want to print=";
    cin>>n;
    number(0,n);
    return 0;
}