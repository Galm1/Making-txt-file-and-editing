#include <stdio.h>

int main() {
    FILE *filePointer;
	char string[100];

    filePointer = fopen("XfirstnameX.txt", "r");
	
	while (fscanf(filePointer, "%s", string) == 1)
	{
		printf("Text: %s", string);
	}
	
	fclose(filePointer);
	
	printf("Read from text file XfirstnameX.txt");

	return 0;
 
}