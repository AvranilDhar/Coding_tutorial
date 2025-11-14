// Write a prog to take two integer input for lower bound and upper bound
// Then count prime nos with in the bound

// Sample input
// 10
// 20
// Output
// 4

#include <stdio.h>

int main() {
    int l,u,i,j,count=0;
    scanf("%d %d",&l,&u);
    for(i=l;i<=u;i++){
        if(i<2){
            continue;
        }else{
            for(j=2;j*j<=i;j++){
                if(i%j==0){
                    break;
                }
            }
            if(j*j>i) count++;
        }
    }
    printf("%d",count);
    return 0;
}