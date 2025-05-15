#include<bits/stdc++.h>
#include <vector>
using namespace std;

void ExplainVector(){
    vector <int> v; 
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    vector<int>::iterator it =v.begin();  // here it is just a name of the poniter to the location to the data stored
    
    cout<<*(it);  // "*", shows that it is printing wat it is pointing at

//  for(vector<int>::iterator it=v.begin();it!=v.end();it++){
//     cout<<*(it)<<" ";  // long method
//  }

//  for(auto it=v.begin();it!=v.end(); it++){
//     cout<<*(it)<<" ";  //easy method
//  }

}

int main(){
    ExplainVector();
}