//printing name for N times

#include<iostream>
using namespace std;
void print(int i, int n){
    if(i >n){
    return;   
    }
    else{
        i++;
        cout<<"sne"<<endl;
        print(i,n);
    }
}
int main(){
    int n;
    cout<<"number of times you want to print your name =";
    cin>>n;
    print(1,n);

}