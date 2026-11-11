//C Files
#include <stdio.h> //scanf(), printf(), fopen(), fprintf(), fclose()
#include <stdlib.h> //exit()

int main(){
	FILE *fptr;
	char sentence[300];
	//1.Open the file
	fptr = fopen(" C:\\Users\\Admin\\OneDrive\\Desktop\\C Files\\sentence.txt", "w");
	if (fptr == NULL){
		printf("Error opening the file \n");
	}
	else{
		exit(1);
	}
	
	printf("Enter a sentence/paragraph ");
	//scanf("%s", &sentence);
	fgets(sentence, sizeof(sentence), stdin);
	
	//2.write to file
	fprintf(fptr, "This is the sentence %s", sentence);
	
	//3.close the file
	fclose(fptr);
	
	printf("File written successfuly ");
	return 0;
	
}