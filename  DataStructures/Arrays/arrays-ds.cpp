/*
/* Solved By : Porimol
/* Date : 22-11-2015
/* Problem : https://www.hackerrank.com/challenges/arrays-ds
/* Status : Accepted
*/


#include <stdio.h>

int main() {

    int n, i, arr[1000];

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = n-1; i >= 0; i--)
       printf("%d ", arr[i]);

    return 0;
}

