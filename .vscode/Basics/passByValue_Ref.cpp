#include<iostream>
using namespace std;

//Pass by value makes a copy of the data 
//pass by reference operates directly on the original data.

void passByValue(string s){ 
     s[0]='T';
    cout<<s<<endl;
}

int main(){
    string s="Raj";
    passByValue(s);
    cout<<s;
    return 0;
}

/*
void passByValue(string &s){ 
     s[0]='T';
    cout<<s<<endl;
}

int main(){
    string s="Raj";
    passByReference(s);
    cout<<s;
    return 0;
}
*/