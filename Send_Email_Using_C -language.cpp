#include <stdio.h>
#include <string.h>
#include<stdlib.h>

int main() {

        char cmd[100];  // to hold the command.
        char to[] = "aaavinash85@gmail.com"; // email id of the recepient.
        char body[] = "SO rocks";    // email body.
        char tempFile[100];     // name of tempfile.

        strcpy(tempFile,tempnam("/tmp","sendmail")); // generate temp file name.

        FILE *fp = fopen(tempFile,"w"); // open it for writing.
        fprintf(fp,"%s\n",body);        // write body to it.
        fclose(fp);             // close it.

        sprintf(cmd,"sendmail %s < %s",to,tempFile); // prepare command.
       system(cmd);                                       // execute it.
	 //  ("mail -s test hello@gmail.com < filename");  

        return 0;
}
