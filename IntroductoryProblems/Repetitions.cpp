#include <iostream>
#include <algorithm>
using namespace std;
string a;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>a;
    int res = 1;
    int cnt = 1;
    for(int i = 1;i<a.size();i++){
        if(a[i-1]==a[i]) cnt++;
        else cnt = 1;
        res = max(res,cnt);
    }
    cout<<res;
}