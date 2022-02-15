#include <iostream>

using namespace std;
int N;
int mod = 1000000007;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N;
    int a = 1;
    for(int i = 1;i<=N;i++){
        a*=2;
        a%=mod;
    }
    cout<<a%mod;
}