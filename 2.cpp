#include<bits/stdc++.h>
using namespace std;

void help(string s,vector<string>&v,int index){
    string temp=s;
    if(index==s.size()){
        return;
    }
    if(temp[index]>=97 && temp[index]<=122){
        temp[index]-=32;
        v.push_back(temp);
        help(temp,v,index+1);
    }
    else if(temp[index]>=65 && temp[index]<=90 ){
        temp[index]+=32;
        v.push_back(temp);
        help(temp,v,index+1);
    }
    help(s,v,index+1);
}

int main(){
    string s;
    cin>> s;
    vector<string>v;
    v.push_back(s);
    help(s,v,0);
    for(int i=0;i<v.size();i++){
        cout<< v[i]<< endl;
    }    
    return 0;
}