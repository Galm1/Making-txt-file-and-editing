#include <stdio.h>

int main() {
    FILE *filePointer;
	char x = 0;
	int length = 0;
	
	
	filePointer = fopen("XfirstnameX.txt", "w");
	fprintf(filePointer, "XfirstnameX");
	
	fseek(filePointer, 0, SEEK_END);
	
	filePointer = fopen("XfirstnameX.txt", "a");
	fprintf(filePointer, "123");

    fclose(filePointer);
	
	filePointer = fopen("XfirstnameX.txt", "r");
	
	while ((x = fgetc(filePointer)) != EOF) 
	{
		length++;
	}		
	
	fclose(filePointer);
	
	printf("Overwrite text file with name of text file then add more to the end of the text\n");
	printf ("The length of the string in file is: %d", length);
	
	return 0;
 
}