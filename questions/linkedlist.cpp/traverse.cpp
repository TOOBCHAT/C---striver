#include<bits/stdc++.h>
using namespace std;
struct node{
    public:
    int data;
    node* next;

    public:
    node(int data1,node* next1){
        data=data1;
        next=next1;
    }

    public:
    node(int data1){
        data=data1;
        next=nullptr;
    }
};

int main(){
    vector<int> arr={1,2,3,4};
        node y= node(arr[0],nullptr);
        cout<<y.data<<endl;
        cout<<y.next;


}