#include <bits/stdc++.h>
#include<stack>
#include<string>
using namespace std;

int main()
{
    string String;
    stack<char>Stack;
    int Serial=0;
    while(cin>>String&&String[0]!='-'){
        Serial++;
        for(int i=0;i<String.length();i++){
            if(String[i]=='}'&&!Stack.empty()){
                if(Stack.top()=='{')
                    Stack.pop();
                else
                    Stack.push(String[i]);
            }
            else{
                Stack.push(String[i]);
            }
        }
        int sizeStack=Stack.size();
        int openBrace=0;
        while(!Stack.empty()&&Stack.top()=='{'){
            Stack.pop();
            openBrace++;
        }
        cout<<Serial<<"."<<" "<<((sizeStack/2) + openBrace%2)<<endl;
        while(!Stack.empty()){
            Stack.pop();
        }
    }
    return 0;
}
