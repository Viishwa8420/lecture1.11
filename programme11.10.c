////code for the question no.09
#include <stdio.h>
 main() 
 {
    int i,j,n = 5,num = 2;
    char a = 'A';

    for (i = 1; i <=n; i++) {
        for (j = 1; j <= i ; j++) {
          if (i % 2 == 0)
		   {
		   	 if (j % 2 == 0) {
                printf("%c   ", a++);
            } else {
                printf("%d   ", num++);
            	
            }
		   }
		   else if (j % 2 == 0){
		   	printf("%d   ", num++);
		   }
		   else{
		   	 printf("%c   ", a++);
		   }
        }
        printf("\n");
    }
}

/*
pattern :
A
2   B
c   3   D
4   E   5   F
G   6   H   7   I
*/
