/*To form just next greater number formed by a given array

Input:
2
5
1 5 4 8 3
10
1 4 7 4 5 8 4 1 2 6

Output:
15834
1474584162

*/
#include <bits/stdc++.h>
#define  endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testCase,Size,element;
    cin>>testCase;
    while(testCase--){
        vector<int> Stack;
        cin>>Size;
        for(int x=0;x<Size;x++){
            cin>>element;
            Stack.push_back(element);
        }
        bool z=next_permutation(Stack.begin(),Stack.end());
        if(z){
        for(int i=0;i<Size;i++){
            cout<<Stack[i];
        }
        }
        else
            cout<<"-1";
        cout<<endl;
    }
    return 0;
}
