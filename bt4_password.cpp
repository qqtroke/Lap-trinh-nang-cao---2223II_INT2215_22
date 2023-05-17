#include<bits/stdc++.h>

using namespace std;
#define MAX 100
string reverse(string temp){
    char pwd[temp.length()];
    int j=0;
    for(int i=(temp.length())-1;i>=0;i--,j++){
        pwd[j]=temp[i];
    }
    pwd[j]=' ';
    string str(pwd);
    return str;
}
int findPassword(string password[],int k){
    string temp;
    char *op;
    unordered_map<string, string> ht;
    for(int i=0;i<k;i++){
        if(password[i].length()%2 == 0 ) {cout<<“error in length” ; return 0 ;}    
        temp=password[i];
        ht.insert(make_pair(temp,reverse(temp)));
        if(ht.find(reverse(temp))!=ht.end()){
            cout<<password[i].length()<<" "<<temp[(password[i].length())/2];
            return 1;
        }
    }
    return 0;
}
int main(){

    string password[MAX];
    unordered_map<string, string> ht;

    int i=0, j=0, k=0, t=0;
    cin>>t;
    k=t;
    while(t){
        cin>>password[i];
        --t; ++i;
    }
    findPassword(password,k);

}