#include <bits/stdc++.h>
#include<stack>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int Order[1001],Size;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(cin>>Size&&Size!=0){
        for(int i=0;i<Size;i++){
            cin>>Order[i];
        }
        int need=0,i=0;
        stack<int> Lane;
        while(i<Size){
            while(!Lane.empty()&&Lane.top()==need+1){
                need++;
                Lane.pop();
            }
            if(Order[i]!=need+1){
                Lane.push(Order[i]);
            }
            else
                need++;
            i++;
        }
        //cout<<Lane.top()<<" ";
        while(!Lane.empty()&&Lane.top()==need+1){
            need++;
            Lane.pop();
        }
        puts(need==Size?"yes":"no");
    }
}
