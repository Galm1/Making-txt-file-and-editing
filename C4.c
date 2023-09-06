#include <stdio.h>

int main() {
    FILE *filePointer;

	
	
    filePointer = fopen("XfirstnameX.txt", "a");
	

	
	fprintf(filePointer, "123");
	
	
	
	fclose(filePointer);
	
	printf("Appended text file XfirstnameX.txt with \"%s\" ", "123");
	
	return 0;

 
}