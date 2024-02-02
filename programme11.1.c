#include<stdio.h>
main()
{
	int i,j,n;
	
	printf("enter value for n : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=i;j>=1;j--){
			printf("%d",j);
		}
			printf("\n");
	}
}



/*pattern: 1
           21
           321
           4321
           54321*/	
