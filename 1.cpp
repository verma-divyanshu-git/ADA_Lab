#include<bits/stdc++.h>
using namespace std;

void reverseStack(stack<int>&s,stack<int>&st){
    if(s.size()==0){
        return;
    }

    int temp=s.top();
    s.pop();

    st.push(temp);

    reverseStack(s,st);
}

int main(){
    int n;
    cin>>n;
    stack<int>s;
    for(int i=0;i<n;i++){
        int num;
        cin>> num;
        s.push(num);
    }
    stack<int>st;

    reverseStack(s,st);
    int sizestack =st.size();
    while (!st.empty()) {
        cout << st.top() << endl;
        st.pop();
    } 


    return 0;
}