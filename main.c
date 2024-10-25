/****************************************
 * C-ploration 4 for CS 271
 * 
 * [NAME] $YOUR_NAME$
 * [TERM] FALL $YEAR$
 * 
 ****************************************/
#include "parser.h"

int main(int argc, const char *argv[])
{		
	if (argc != 2)
	{
		printf("Usage: %s [filename]\n", argv[0]);
		exit(EXIT_FAILURE);
		// fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
		// return EXIT_FAILURE;
	}

	const char *file_name = argv[1];
	FILE *file = fopen(file_name, "r");
	if (file == NULL)
	{
		perror("Unable to open file");
		exit(EXIT_FAILURE);
	}
	// FILE *file = fopen(argv[1], "r");
	// if (file == NULL)
	// {
	// 	perror("Error opening file");
	// 	return EXIT_FAILURE;
	// }

	// Call the parse function
	parse(file);

	// Close the file pointer
	fclose(file);

	return 1;
}
