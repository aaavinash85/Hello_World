
/*
This program extract the csv file and after that Stores the words perceding the comma of that file into an array and finally give output of the words that are stored in the array
*/
 //User Information
 // Avinash koshal
 // Univ.Roll.NO-1655/16
 // Branch-CSE
 #include<stdio.h>
#include<string.h>
#include<stdlib.h>
   main() 
 {
	FILE*fp=fopen("m.csv","r+");
     const char s[2]=",";              // here s is constant. It can't be reasign another string but we can assign another character value at s[index]
	char*token;                        //  Char* is a pointer that points to a token. Tokens are the smallest units that make a complete C program
	int i;
	if(fp!=NULL) {
		char line[30];
		while(fgets(line,sizeof line,fp)!=NULL) {
			token=strtok(line,s);    // Strtok break the String into tokens. It search for comma and when it is found it stores the preceding value into an array and so on 
			for(i=0;i<2;i++) {                        
				if(i==0) {
					printf("%s",token);
					token=strtok(NULL,s);
				} else {
					printf("%s",(token));
				}
			}
		}
		fclose(fp);
	} 
}
