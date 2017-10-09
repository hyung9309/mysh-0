#include <stdio.h>
#include <stdlib.h>

#include <unistd.h>

#include <string.h>

#include "commands.h"

int do_cd(int argc, char** argv) {
  if (!validate_cd_argv(argc, argv))
    return -1;


	char cu2[200];

	if(chdir(argv[1]) != 0)
	return 0;

	else
	return -1;
}

int do_pwd(int argc, char** argv) {
  if (!validate_pwd_argv(argc, argv))
    return -1;


	char curr[200];

	if(getcwd(curr,200) != NULL)
//getcwd(curr,200);
		printf("%s\n",curr);
	else
	return -1;


	return 0;
}

int validate_cd_argv(int argc, char** argv) {

	if(strcmp(argv[0], "cd") == 0 && argc == 2)
	return 1;

	else
	return 0;


  // TODO: Fill it!
//  return 1;
}

int validate_pwd_argv(int argc, char** argv) {

	if(strcmp(argv[0], "pwd") == 0 && argc == 1)
	return 1;

	else
	return 0;


  // TODO: Fill it!
//  return 1;
}
