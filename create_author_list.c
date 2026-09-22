/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAE
 ** STRICTLY ADHERED TO THE TENURES OF THE
 ** OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
 */	
 
#include <stdio.h>	// IO prototype functions
#include "project4.h"	// project 4 specific functions
#include <string.h>	// string manipulation functions
#include <stdlib.h>	// m/calloc related functions 

 /* Adds author to the list if not already in it */
 void create_author_list(struct author **authorList, struct Data *info) {
	struct author *a = malloc(sizeof(struct author));
	if (a == NULL) {
	fprintf(stderr, "Memory allocation failed.\n");
	exit(1);
	}
	
	strncpy(a->author_name, info->author, sizeof(a->author_name) - 1);
	(*(a->author_name + sizeof(a->author_name) - 1)) = '\0';
	a->count = 1;
	a->next = NULL;

	/* Adds author to list */
	add_author(authorList, a);
 }
