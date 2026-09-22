/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
 ** STRICTLY ADHERED TO THE TENURES OF THE
 ** OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
 */
 
#include <stdio.h>		// IO prototype functions
#include "project4.h"	// project 4 specific functions

/* Prints all the authors in the list */
void print_authors(struct author **authorList) {
	struct author *traverse = *authorList;
	printf("\nAuthors represented in these quotes are: \n");
	
	/* Prints all authors in list */
	while (traverse != NULL) {
		printf("%s\n", traverse->author_name);
		traverse = traverse->next;
	}
	printf("\n");	// formatting
}
