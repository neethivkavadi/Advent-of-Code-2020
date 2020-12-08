#include <stdio.h>
#include <stdlib.h>

int main() {

	// size of file unknown
	// file does not exists error: not applicable but included
	// type of data known

	int c;
	FILE *file;
	char * line = NULL;
	size_t len = 0;
	ssize_t read;

	file = fopen("d01_input.txt", "r");

	int arr[200];
	int diff = 0;

	for(int i = 0; i < 200; i++){
		fscanf(file, "%d", &arr[i]);
	}

	for(int j=0; j<200; j++){
		for(int k=0; k<200; k++){
			if ((arr[j] + arr[k])==2020)
				printf("%d is the product of %d and %d whose sum is 2020\n", arr[j]*arr[k], arr[j], arr[k]);
		}
	}

	return 0;
}

