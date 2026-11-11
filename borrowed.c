#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *fptr;
	char title[100];
	fptr = fopen(" C:\\Users\\Admin\\OneDrive\\Desktop\\C Files\\borrowed_book.txt", "a");
	if (fptr == NULL){
		printf("Error opening the file \n");
	}
	else{
		exit(1);
	}
	
	printf("Enter the title of the borrowed book: ");
	scanf("%s", &title);
	
	fprintf(fptr, "%s", title);
	fclose(fptr);
	
	return 0;
	
}