#include <iostream>
using namespace std;
int N;
bool check[200005];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N;
    for(int i = 0;i<N-1;i++){
        int a;cin>>a;
        check[a] = 1;
    }
    for(int i = 1;i<=N;i++){
        if(!check[i]){
            cout<<i;
            return 0;
        }
    }
}