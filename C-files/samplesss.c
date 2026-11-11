//File handling
#include <stdio.h> //scanf(), printf(), fprintf(), fgets(), fgets(), fputs
#include <stdlib.h> //exits

int main(){
	
	return 0;
}

void writeToFile(){
	FILE *fp;
	char sentence[300];
	fp = fopen(" C:\\Users\\Admin\\OneDrive\\Desktop\\C Files\\samplesss.txt", "w");
	
	if (fp == NULL){
		printf("Error creating the file (path) \n");
		exit(1);
	}
	printf("Enter a paragraph \n");
	fgets(sentence, sizeof(sentence), stdin);
	//scanf(), scanf(" %s^[ \n]", &sentence)
	fputs(sentence, fp);
	//fprintf(fp, "This is %s", sentence);
	
	printf("paragraph successfully written to file. \n");
	fclose(fp);
}
