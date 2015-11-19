/*
/* Solved By : Porimol
/* Date : 19-11-2015
/* Problem : https://www.hackerrank.com/contests/101hack21/challenges/angry-professor
/* Status : Accepted
*/

#include <stdio.h>

int main() {

    int i, j, test_case, n, k, attend, cnt = 0;

    scanf("%d", &test_case);

    for(i = 0; i < test_case; i++){
        cnt = 0;
        scanf("%d %d", &n, &k);

        for(j = 0; j < n; j++){
            scanf("%d", &attend);

            if(attend <= 0)
                cnt++;
        }

        //printf("K = %d CNT = %d\n", k, cnt);

        if(cnt >= k)
            printf("NO\n");
        else
            printf("YES\n");
    }

    return 0;
}

