#include <stdio.h>
#include <stdlib.h>

int main() {

	int c;
	FILE *file;
	char * line = NULL;
	size_t len = 0;
	ssize_t read;

	file = fopen("d01_input.txt", "r");

	int dataarr[200];
	int i;

	for(int i = 0; i < 200; i++){
		fscanf(file, "%d", &dataarr[i]);
	}

	int sum_tracker = 0;
	int sum = 0;
	for(int j = 0; j < 200; j++){
		for(int k = 0; k < 200; k++){
			for(int l = 0; l < 200; l++){
				int sum = dataarr[j] + dataarr[k] + dataarr[l];
				if (sum == 2020){
					if(sum_tracker != sum){
						printf("%d is the product of the three numbers whose sum %d + %d + %d is %d\n", dataarr[j]*dataarr[k]*dataarr[l], dataarr[j], dataarr[k], dataarr[l], dataarr[j]+dataarr[k]+dataarr[l]);	
					}
					sum_tracker = sum;
				}
			}
		}
	}
	return 0;
}
