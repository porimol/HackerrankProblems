/*
/* Solved By : Porimol
/* Date : 
/* Problem : https://www.hackerrank.com/challenges/a-very-big-sum
/* Status : Accepted
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    long long i, n, arr[10000], sum = 0;
    
    scanf("%lld", &n);
    
    for(i = 0; i < n; i++){
        scanf("%lld", &arr[i]);
        
        sum += arr[i];
    }
    printf("%lld", sum);
    
    return 0;
}
