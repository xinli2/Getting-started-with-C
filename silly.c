/*
 * File:    silly.c
 * Authors: Russell Lewis
 *
 * Purpose: A program that is missing the required header files.
 */

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(int argc, char **argv)
{
	int i;

	if (argc != 2)
	{
		fprintf(stderr, "SYNTAX: %s <seed>\n", argv[0]);
		return 1;
	}

	char *s = "This is a test string, foo bar 123.\n";
	for (i=0; i<strlen(s)+1; i++)
	{
		printf("i=%d: c='%c' ASCII=0x%02x",
		       i, s[i],s[i]);

		if (isalpha(s[i]))
			printf(" isalpha");
		if (isdigit(s[i]))
			printf(" isdigit");
		if (isspace(s[i]))
			printf(" isspace");

		printf("\n");
	}

	printf("\n");

	srand(atoi(argv[1]));
	for (i=0; i<10; i++)
		printf("%d %d %d\n", rand(), rand()%10, rand()%16);

	/* all is OK! */
	return 0;
}
