#include<stdio.h>
main()
{
	int i,j,n;
	
	printf("enter value for n : ");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("%d",j%2);
		}
			printf("\n");
	}
}



/*pattern: 10101
           1010
           101
           10
           1 */	
