#include<stdio.h>
int main(){
	int t;
	int i;
	scanf("%d",&t);	
	for(i=1;i<=t;i++){
		int j;
		char website[10][100];
		int m[10];
		int highest;
		for(j=0;j<10;j++)
			scanf("%s%d",website[j],&m[j]);
		for(j=highest=0;j<10;j++)
			if(m[j]>highest)
				highest=m[j];
		printf("Case #%d:\n",i); 
		for(j=0;j<10;j++)
			if(m[j]==highest)
				printf("%s\n",website[j]);
	}
	return 0;
}