#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //NAIVE
    /*int Size;
    while(cin>>Size&&Size!=0){
        int histogram[Size];
        for(int i=0;i<Size;i++){
            cin>>histogram[i];
        }
        int maxArea=0;
        for(int i=0;i<Size;i++){
            int height=histogram[i];
            maxArea=max(maxArea,height);
            for(int j=i-1;j>=0;j--){
                const int width=(i-j+1);
                height=min(histogram[j],height);
                maxArea=max(maxArea,height*width);
            }
        }
        cout<<maxArea<<endl;
    }*/
    ll Size;
    while(cin>>Size&&Size!=0){
        ll histogram[Size];
        for(ll i=0;i<Size;i++){
            cin>>histogram[i];
        }
        stack<int>Stack;
        ll Max_area=0,i=0,top,area_withtop;
        while(i<Size){
            if(Stack.empty()||histogram[Stack.top()]<=histogram[i]){
                Stack.push(i++);
            }
            else{
                top=Stack.top();
                Stack.pop();
                area_withtop=histogram[top]*(Stack.empty()?i:i-Stack.top()-1);
                if(Max_area<area_withtop)
                    Max_area=area_withtop;
            }
        }
        while (!Stack.empty())
        {
        top = Stack.top();
        Stack.pop();
        area_withtop = histogram[top] * (Stack.empty() ? i :i - Stack.top() - 1);
        if (Max_area < area_withtop)
            Max_area = area_withtop;
         }
    cout<<Max_area<<endl;
    }
    return 0;
}
