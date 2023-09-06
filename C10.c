#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	
    char string[] = "XlastnameX";
	
    int length = strlen(string);
	
	
	printf("Original string before uppercasing: %s\n", string);


    for (int i = 0; i < length; i++) {
        string[i] = toupper(string[i]);
    }


    printf("New uppercased string: %s", string);
	
	
	FILE *filePointer;

     filePointer = fopen("XfirstnameX.txt", "w");
	

	
	fprintf(filePointer, "Fall 2023 - DS\n Assignment - 1\n XfirstnameX XlastnameX ; abc123");
	

    return 0;
	
	
}