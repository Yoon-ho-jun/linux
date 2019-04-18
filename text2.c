#include <stdio.h>

int main()
{
	FILE *fp;
	int i;
	float j,sum=0;
	
	fp = fopen("text3.txt","r");
	
	for(i=0; i<20; i++){
		fscanf(fp,"%f,",&j);
		sum += j;
	}
	
	printf("%.1f\n",sum);
	
	fclose(fp);
	
	return 0;
}

