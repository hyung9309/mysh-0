#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

void mysh_parse_command(const char* command,
                        int *argc, char*** argv)
{
	char copy_c[8096];
	char *insta[200];

//	int argc_numb;
	int arry;


	*insta = (char*)malloc(8096);

	*argv = (char**)malloc(200);



	strcpy(copy_c, command);


	*insta = strtok(copy_c," \t\n");


	if(insta != NULL)
		for(arry = 0; insta != NULL; ++arry)
		{
			//*argv[arry] = insta;
			strcpy(*argv[arry], insta);

			*insta = strtok(NULL, " \t\n");


		}
	else
		fprintf(stderr, "why you are here!?\n");


	*argc = arry+1; ///the number of arguments.



  // TODO: Fill this!
}
