#include <stdio.h>
struct Mystruct{
    int a;
    char b;

};
 int main(){
    printf("%d",sizeof(struct Mystruct));
    return 0;  
 }