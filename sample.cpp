#include<iostream>
#include<math.h>
using namespace std;

int minimum(int a, int b){
    int c=min(a,b);
    return c; 

}
int main(){
    int a,b;
    cout<<"enter value of a and b";
    cin>>a>>b;
    int res=minimum(a,b);
    cout<<res;
}
