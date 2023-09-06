#include <stdio.h>

int main() {
    FILE *filePointer;

    filePointer = fopen("XfirstnameX.txt", "a");
	
    fseek(filePointer, 0, SEEK_END);

    fprintf(filePointer, "!TEST! Should be at end of file! \n");

    fclose(filePointer);

	printf("Print a test at the end of text file");

    return 0;
}
