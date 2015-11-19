/*
/* Solved By : Porimol
/* Date : 
/* Problem : https://www.hackerrank.com/challenges/plus-minus/submissions
/* Status : Accepted
*/

#include<stdio.h>

int main(){

    int i, n, input, positive = 0, nagetive = 0, zero = 0;
    float positive_result, nagetive_result, zero_result;

    scanf("%d", &n);

    for(i = 0; i < n; i++){

        scanf("%d", &input);
        

        if(input == 0)
            zero++;

        else if(input < 0)
            nagetive++;

        else
            positive++;
    }

    zero_result = (float) zero/n;
    nagetive_result = (float) nagetive/n;
    positive_result = (float) positive/n;


    printf("%f\n", positive_result);
    printf("%f\n", nagetive_result);
    printf("%f\n", zero_result);

    return 0;
}
