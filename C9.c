#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	
    char string[] = "XlastnameX";
	
    int length = strlen(string);
	
	
	printf("Original string before lowercasing: %s\n", string);


    for (int i = 0; i < length; i++) {
        string[i] = tolower(string[i]);
    }


    printf("New lowercased string: %s", string);

    return 0;
	
	
}
