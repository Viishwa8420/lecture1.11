#include<stdio.h>
main()
{
	int i,j,n;
	
	printf("enter value for n : ");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--){
		for(j=i;j<=n;j++){
			printf("%d",i);
		}
			printf("\n");
	}
}



/*pattern: 5
           44
           333
           2222
           11111*/	
