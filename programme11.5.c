#include<stdio.h>
main()
{
	int i,j,n;
	
	printf("enter value for n : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=i;j<=n;j++){
			printf("%d",i);
		}
			printf("\n");
	}
}



/*pattern: 11111
           2222
           333
           44
           5  */	
