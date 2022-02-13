#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;cin>>T;
    
    for(int i = 0;i<T;i++){
        int a,b;cin>>a>>b;
        ll maxi = max(a,b);
        ll lmax = maxi*maxi;
        ll lmin = lmax-(2*maxi)+2;
        if(maxi%2==0){
            if(a > b) cout<<lmax-b+1<<"\n";
            else cout<<lmin+a-1<<"\n";
        }else{
            if(a > b) cout<<lmin+b-1<<"\n";
            else cout<<lmax-a+1<<"\n";
        }
    }
    
}