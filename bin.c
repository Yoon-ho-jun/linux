#include <stdio.h>

int main(int argc,char *argv[])
{
	
	FILE *fp;
	int i;
	
	fp=fopen("bin.bin","wb");
	
	for(i=1; i<=1000; i++){
	fwrite(&i,sizeof(i),1,fp);
	}
	
	fclose(fp);
	
	return 0;
}
