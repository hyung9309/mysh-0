#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

void mysh_parse_command(const char* command,
                        int *argc, char*** argv)
{
	char *copy_c = NULL;
	char *insta = NULL;

//	int argc_numb;
	int arry;


	insta = (char*)malloc(8096);

	*argv = (char**)malloc(sizeof(char*)*200);



	strcpy(copy_c, command);


	insta = strtok(copy_c," \t\n");


	if(insta != NULL)
	{
		for(arry = 0; insta != NULL; ++arry)
		{
			//*argv[arry] = insta;
			*argv[arry] = (char*)malloc(sizeof(char)*strlen(insta));
			strcpy(*argv[arry], insta);

			insta = strtok(NULL, " \t\n");


		}
		
		*argc = arry+1;
	}
	else
		*argc = 1;
//		fprintf(stderr, "why you are here!?\n");


//	*argc = arry+1; ///the number of arguments.



  // TODO: Fill this!
}
