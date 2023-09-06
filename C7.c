#include <stdio.h>
#include <string.h>


int main() {

    char string1[20] = "XfirstnameX ";
    char string2[] = "XlastnameX";
    
	
    strcat(string1, string2);
	
	printf("Concatenate two strings together using first and last name.\n");
    
    printf("Result: %s", string1);
    
    return 0;
	
	
}
