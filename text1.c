#include <stdio.h>

int main()
{
	FILE *fp;
	int i,j;
	int sum=0;
	
	fp = fopen("text2.txt","r");
	
	for(i=0; i<20; i++){
		fscanf(fp,"%d,",&j);
		sum += j;
	}
	
	printf("%d\n",sum);
	
	fclose(fp);
	
	return 0;
}

