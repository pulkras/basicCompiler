#include <stdio.h>
#include <regex.h>

int main() {
	// variable to create regex
	regex_t reegex;
	// return value after creation of regex
	int value;

	// variable to create assembly code
	char *assemblyFormat;

	value = regcomp(&reegex, "int main\(\){return(?P<ret>[0-9]+);}", 0);

	if (value == 0) {
		printf("RegEx compiled successfully");
	} else {
		printf("Compilation error");
	}
	
	 assemblyFormat = 
		"    .globl main\n\
main:\n\
	movl ${}, %eax\n\
	ret";
	printf("\n");
	printf("%s",assemblyFormat);
	return 0;
}
