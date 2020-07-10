#include <bits/stdc++.h>
//#include<stack>
//#include<string>
//#include<ctype.h>

using namespace std;

int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

    string String;
    cin>>String;
    int Size=String.size();
    stack<int> Stack;
    for(int i=0;i<Size;i++){
        if(String[i]=='('){
            Stack.push(-1);
        }
        else if(String[i]==')'){
            int x=0;
            while(Stack.top() != -1){
                x += Stack.top();
                Stack.pop();
            }
            Stack.pop();
            Stack.push(x);
        }
        else if(isdigit(String[i])){
            int x=Stack.top();
            Stack.pop();
            Stack.push(x * ((int)(String[i])-48));
        }
        else if(isalpha(String[i])){
            if(String[i]=='H'){
                Stack.push(1);
            }else if(String[i]=='C'){
                Stack.push(12);
            }else{
                Stack.push(16);
            }
        }
    }
    int Mass=0;
    while(!Stack.empty()){
        Mass+=Stack.top();
        Stack.pop();
    }
    cout<<Mass<<endl;

    return 0;
}
