/*
/* Solved By : Porimol
/* Date : 
/* Problem : https://www.hackerrank.com/challenges/plus-minus/submissions
/* Status : Accepted
*/

#include<stdio.h>

int main()
{
    int i, j, n;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){

        for(j = i; j < n; j++)
			printf(" ");

        for(j = 0; j < i; j++){
            printf("#");
        }

        printf("\n");
    }

    return 0;
}
