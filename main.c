#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "ssj-asciis.h"

char help(char * exe)
{
	return printf("Usage: %s\n-h,--help for this message\nThis program is for people who mistype ssh. It prints DBZ characters. Have a nice day!\n",exe);
}

int main(int argc, char * argv[])
{
	unsigned int mugen = 0;
	long int * character = NULL;
	unsigned int total_characters = 2;
	char * chosen_character = NULL;
	if(argc == 2
	&&	(!strcmp(argv[1],"-h")
		|| !strcmp(argv[1],"--help"))) {
		exit(help(argv[0]));
	} 
	srand(time(NULL));
/* I tried to write this as a function but this will have to do */
	character = calloc(total_characters,sizeof(long int));
/* Make sure to allocate EACH element of character array with a unique character from dbz.h */
	character[0] = (long int)GOKU;
	character[1] = (long int)GOHAN;
/* Ok now we're done with what was meant to be in a function */
	mugen = rand()%total_characters; /* Roll for a character */
	chosen_character = (char *)character[mugen]; /* Copying character location */
	free(character); /* Freeing array of all characters */
	return puts(chosen_character); /* Print and exit */
}
