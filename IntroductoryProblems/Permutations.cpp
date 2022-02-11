#include <iostream>
#include <algorithm>
#include <vector>
#define vi vector<int>
using namespace std;
int N;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N;
    if(N==1) {
        cout<<1;
        return 0;
    }
    if(N<=3) cout<<"NO SOLUTION";
    else{
        for(int i =2;i<=N;i+=2) cout<<i<<" ";
        for(int i =1;i<=N;i+=2) cout<<i<<" ";  
    }
}