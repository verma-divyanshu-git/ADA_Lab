/* Given a string 'S'. Write a program to find an array of all possible strings in any order that can be formed by transforming every letter individually to the lowercase or the uppercase.
Note:
1. You can print the array in any order.
2. The string 'S' only contains English alphabets and digits.

Sample Input 1:
a1b
Sample Output 1:
A1B A1b a1B a1b

Sample Input 2:
0
Sample Output 2:
0
Explanation: There is no alphabet in the string, so we get the output same as the input string.
*/


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
