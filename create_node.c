/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
 ** STRICTLY ADHERED TO THE TENURES OF THE
 ** OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
 */

#include <stdio.h>	// IO prototype functions
#include "project4.h"	// project 4 specific function prototypes 
#include <string.h>	// string functions
#include <stdlib.h>	// m/calloc related functions

/* Creates Node structure with information */
Node *create_node(struct Data *info) {
	Node *n = malloc(sizeof(Node));

	// Check for memory allocation
	if (n == NULL) {
		fprintf(stderr, "Memory allocation failed.\n");
		exit(1);
	}
	
	n->Quote = *info;
	n->next = NULL;

	return n;
}
