#include<stdio.h>
main()
{
	int i,j,n;
	
	printf("enter value for n : ");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--){
		for(j=i;j<=5;j++){
			printf("%d",j);
		}
			printf("\n");
	}
}



/*pattern: 5
           45
           345
           2345
           12345*/	
