//factorial of N elements

#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

int main(){
    int n;
    cout<<"no of elements";
    cin>>n;
    cout<<"factorial of "<<n<<" is "<<factorial(n);
    return 0;
}