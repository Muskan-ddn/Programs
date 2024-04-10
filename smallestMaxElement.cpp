#include<iostream>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a%b==0){
            cout<<1<<endl;
        }
        else{
            if(b%a==0){
                cout<<b/a<<endl;
            }
            else{
                if(a>b){
                    cout<<2<<endl;
                }
                else cout<<(a+b)/a<<endl;
            }
        }
    }
 

    return 0;
}
