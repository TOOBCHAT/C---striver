#include<bits/stdc++.h>
using namespace std;
void pattern0(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern1(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern2(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void pattern3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}
void pattern3_5(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void pattern5(int n){
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
void pattern6(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";      
        }
        for(int j=0;j<2*n - (2*i+1);j++){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
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
        
        pattern5(n);
        pattern6(n);
        
    }
}
