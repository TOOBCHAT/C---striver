#include <bits/stdc++.h>
using namespace std;

int d(int n){
    if(n<=1){
        return n;
    }
    int last=d(n-1);
    int slast=d(n-2);
    return last + slast;

}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"The "<<n<<"th number in the Fibonacci sequence is "<<d(n)<<endl;
    return 0;
 
}
