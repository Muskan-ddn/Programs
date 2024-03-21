#include <bits/stdc++.h>
using namespace std;

void deleteMid(stack<int>&s , int n)
{   
    if(s.empty() || n==0) //base condition
        return;

    int temp=s.top();
    s.pop();

    deleteMid(s,n-1);

    if(n!=(s.size()+1))
    s.push(temp);
}

int main(){
    stack<int> s;
     s.push(1);
     s.push(4);
     s.push(3);
     s.push(2);
     s.push(5);
     
    int n=(s.size()/2)+1; //middle element 
  
    deleteMid(s,n);

     cout << "output : ";
     while(!s.empty()){
        int p=s.top();
        s.pop();
        cout<<p<<" ";
     }
     return 0;


}