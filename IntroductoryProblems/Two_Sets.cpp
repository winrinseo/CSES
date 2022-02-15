#include <iostream>
#include <vector>
using namespace std;
int N;
vector<int> a,b;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N;
    long long asum = 0,bsum = 0;
    for(int i = N;i>=1;i--){
        if(asum<=bsum){
            a.push_back(i);
            asum+=i;
        }else{
            b.push_back(i);
            bsum+=i;
        }
    }
    if(asum!=bsum){
        cout<<"NO";
    }else{
        cout<<"YES"<<"\n";
        cout<<a.size()<<"\n";
        for(int i = a.size()-1;i>=0;i--)
            cout<<a[i]<<" ";
        cout<<"\n";
        cout<<b.size()<<"\n";
        for(int i = b.size()-1;i>=0;i--)
            cout<<b[i]<<" ";
    }
}