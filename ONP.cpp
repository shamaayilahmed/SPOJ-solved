#include <iostream>
#include<cstring>
#include<stack>
#include<cctype>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testCase;cin>>testCase;
    stack<char> s;
    char str[500];
    while(testCase--){
    cin>>str;
    int l=strlen(str);
    for(int i=0;i<l;i++){
        if(isalpha(str[i])){
            cout<<str[i];
        }
        else if(str[i]==')'){
            cout<<s.top();
            s.pop();
        }
        else if(str[i]!='('){
            s.push(str[i]);
        }
    }
    cout<<endl;
    }
return 0;
}
