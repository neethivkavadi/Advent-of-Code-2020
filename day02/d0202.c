#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	FILE *fp = fopen("d02_input.txt", "r");
	char sentence_tray[256];

	int goodPasswords = 0;

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
		password = strtok(NULL, "\n"); 

		size_t len = strlen(password);

		if(password[min] == letter){
			count++;
		}

		if(password[max] == letter){
			count++;
		}

		if(count == 1){
			goodPasswords++;
		}
	}

	printf("Number of good passwords: %d", goodPasswords);

	fclose(fp);

	return 0;
}
