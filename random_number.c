//C Files
#include <stdio.h> //scanf(), printf(), fopen(), fprintf(), fclose()
#include <stdlib.h> //exit()

int main(){
	FILE *fptr;
	int num;
	//1.Open the file
	fptr = fopen(" C:\\Users\\Admin\\OneDrive\\Desktop\\C Files\\sample.txt", "w");
	if (fptr == NULL){
		printf("Error opening the file \n");
	}
	else{
		exit(1);
	}
	
	printf("Enter a random number ");
	scanf("%d", &num);
	
	//2.write to file
	fprintf(fptr, "%d", num);
	
	//3.close the file
	fclose(fptr);
	
	printf("File written successfuly ");
	return 0;
	
}
