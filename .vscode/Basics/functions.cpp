#include<iostream>
using namespace std;

/*Functions are a set of code which performs something for you
Functions help to modularise code
Testing and debbuging
Readability
Reusability
Scalability */

int sum(int num1,int num2){  //parameterised function
    return num1+num2;
    
}

void area(int l,int b){     //parameterised void function
    cout<<"area="<<l*b<<endl;
}

void nonpara(){              //non parameterised void function
    cout<<"Hey Muskan"<<endl;
    
}


string getMessage() {        //non parameterised ( and non void)
    return "Namaste";       // Returns a string message
}


int main()
{
    int num1,num2=0;
    cout<<"Enter numbers : ";
    cin>>num1>> num2 ;
    int res=sum(num1,num2);
    cout<<"sum="<<res<<endl;
    
    area(num1,num2);
    
    nonpara();
    
    string message = getMessage(); // Calling the function
    cout << message << endl;
    return 0;
}   

// pass by value
#include<iostream>
using namespace std;

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

//pass by reference

