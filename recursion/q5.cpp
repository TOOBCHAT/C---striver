//sum of first N elements using recursive function

#include<bits/stdc++.h>
using namespace std;

void lum(int i,int sum){
if(i<1){
    cout<<"Sum is: "<<sum<<endl;
    return;
}
else{
    sum=sum+i;
    i--;
    lum(i,sum);
}
}

int main(){
    int n;
    cout<<"Enter the value of N: ";
    cin>>n;
    lum(n,0);
    return 0;
 
}
    
// void sumRecursive(int i, int sum) {
//     if (i <= 0) {
//         cout << "Sum is: " << sum << endl;
//         return;                                                      //second method
//     } else {
//         sumRecursive(i - 1, sum + i);
//     }
// }