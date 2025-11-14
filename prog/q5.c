// Do the Last one

// Wap to identify one user given positive integer is automorphic no or not

// An automorphic number is a number whose square ends with the same digits as the original number. For example, 5 is automorphic because \(5^{2}=25\), which ends in 5. Similarly, 76 is automorphic because \(76^{2}=5776\), which ends in 76.

#include <stdio.h>

int main() {
    int i,n;
    scanf("%d",&n);
    int temp=n;
    if((temp*temp)%10==n){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}