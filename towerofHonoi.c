#include<stdio.h>

void solve(char src,char dest,char h,int n){ //h->helper_rod
      if(n==1){
        printf("\n move disk 1 from %c to %c",src,dest);
        return ;
      }
      solve(src,h,dest,n-1);
         printf("\n move disk %d from %c to %c\n",n,src,dest) ;
      solve(h,dest,src,n-1);
      
        
      
}

int main(){
   int n = 3; // Number of disks
    solve('A', 'C', 'B',n); // A, B, and C are the rod names
    return 0;
}