//print numbers in opposite manner(for eg-4,3,2,1,0)

#include<bits/stdc++.h>
using namespace std;

void number(int i,int n){
if(i<1){
    return;
}
else{
    cout<< i<<endl;
    i--;
    number(i,n);
    
}
}
int main(){
    int n;
    cout<<"number of elemtnts you want to print=";
    cin>>n;
    number(n,n);
    return 0;
}
    
