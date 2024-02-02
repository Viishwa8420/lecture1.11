//code for the question no.10
#include <stdio.h>
 main() 
 {
    int i,j,n = 5,num = 1;
    char a = 'A';

    for (i = 1; i <=n; i++) {
        for (j = 1; j <= n ; j++) {
            if (j % 2 == 0) {
                printf("%c   ", a);
                a++;
            } else {
               printf("%d   ", num);
            	num++;
            
            }
        }
        printf("\n");
    }
}

/*
pattern :
1   A   2   B   3
4   C   5   D   6
7   E   8   F   9
10   G   11   H   12
13   I   14   J   15
*/
