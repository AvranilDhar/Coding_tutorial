// Write a prog to take input of an array 

// Then print count of prime nos and palindrome nos
// By using two different user defined function 


// Time 15 min

// Sample input
// 6
// 12 31 5 7 13 33
// Output
// prime count 4
// palindrome count 3

#include <stdio.h>

int prime(int n){
    if(n<2) return 0;
    int i;
    for(i = 2; i*i <= n; i++){
        if(n%i == 0) return 0;
    }
    return 1;
}

int palindrome(int n){
    int rev = 0, temp = n;
    while(temp > 0){
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    if(rev == n) return 1;
    else return 0;
}

void main(){
    int n,i,primeCount = 0, palindromeCount = 0;
    scanf("%d",&n);
    int arr[n];
    for(i = 0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i = 0; i<n;i++){
        if(prime(arr[i])) primeCount++;
        if(palindrome(arr[i])) palindromeCount++;
    }
    printf("\nprime count %d\npalindrome count %d",primeCount,palindromeCount);
}