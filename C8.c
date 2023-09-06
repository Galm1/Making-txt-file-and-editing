#include <stdio.h>
#include <string.h>

int main() {
	
    char string1[10] = "XfirstnameX";
    char string2[10] = "XlastnameX";
	int num = strcmp(string1, string2);
	
	if (num == 0) 
	{
		printf("The strings are equal");
	} 
	else if (num < 0)
	{
		printf("String1 (XfirstnameX) comes before String2 (XlastnameX) lexicographically");
	}
	else
	{
		printf("String2 (XlastnameX) comes before String1 (XfirstnameX) lexicographically");
	}
    
    return 0;
	
	
	
}
