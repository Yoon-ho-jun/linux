#include <stdio.h>

int main(int argc, char *argv[]){

	FILE *fp;
	
	int i,j,sum=0;
	
	fp=fopen(argv[1],"rb");
	
	for(i=0; i<1000; i++){
	
	fread(&j,sizeof(j),1,fp);
	sum += j;

	}
	
	printf("%d\n",sum);
	
	fclose(fp);
	
	return 0;
	}
