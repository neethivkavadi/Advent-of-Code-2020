#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){

	FILE *fp = fopen("d02_input.txt", "r");
	char sentence_tray[256];

	int goodPasswords;

	while(fgets(sentence_tray, sizeof(sentence_tray), fp))
	{
		int count = 0;

		int min = 0;
	        int max = 0;
        	char letter;
        	char *password;

		// tokenize here
		min = atoi(strtok(sentence_tray,"-"));
		max = atoi(strtok(NULL, " "));
		letter = *strtok(NULL, ":");
		password = strtok(NULL, "\n"); // \r: reset;

		size_t len = strlen(password);

		for(int i=0; i<len; i++){
			if(password[i] == letter){
				count++;
			}
		}

		if((count>=min) && (count<=max)){
			goodPasswords++;
		}
	}

	printf("Number of good passwords: %d", goodPasswords);

	fclose(fp);

	return 0;
}
