#include <stdio.h>

int main() {
    FILE *filePointer;

    filePointer = fopen("XfirstnameX.txt", "w");
	
	fclose(filePointer);
	
	printf("Open and closed text file XfirstnameX.txt");

	return 0;
 
}