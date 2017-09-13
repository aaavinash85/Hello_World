#include<stdio.h>
#include<string.h>
#include<stdlib.h>
   main() 
 {
	FILE*fp=fopen("m.csv","r+");
	const char s[2]=",";
	char*token;
	int i;
	if(fp!=NULL) {
		char line[23];
		while(fgets(line,sizeof line,fp)!=NULL) {
			token=strtok(line,s);
			for(i=0;i<2;i++) {
				if(i==0) {
					printf("%s",token);
					token=strtok(NULL,s);
				} else {
					printf("%d",atoi(token));
				}
			}
		}
		fclose(fp);
	} else {
		perror("m.csv");
	}
}
