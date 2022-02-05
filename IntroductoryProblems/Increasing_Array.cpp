#include <iostream>
#include <algorithm>
using namespace std;
int N;
int a,ma=0;
long long res = 0;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N;
    for(int i = 0;i<N;i++){
        cin>>a;
        ma = max(ma,a);
        res += (ma - a);
    }
    cout<<res;
}