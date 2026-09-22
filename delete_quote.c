/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
 ** STRICTLY ADHERED TO THE TENURES OF THE
 ** OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
 */
 
#include <stdio.h>		// IO prototype functions
#include "project4.h"	// project 4 specific functions
#include <stdlib.h>		// m/calloc related functions
#include <string.h>		// string functions

/* Deletes a quote given the key in the list */
void delete_quote(Node **headPtr, Node *n, Node *prior, struct Data *d, int *quoteCt, struct author **authorList) {
	/* Finding author in authorList */
	adjust_author(authorList, n->Quote.author);	
	
	char quote[750];
	int key = n->Quote.key;
	strcpy(quote, n->Quote.quote);

	// Deletes quote 
	if (prior == NULL) {
		// Deletes head
		*headPtr = n->next;
	} else {
		prior->next = n->next;
		}
	(*quoteCt)--;
	free(n);		// n no longer needed
	n = NULL;
	printf("key %d, \"%s\" has been deleted.\n\n", key, quote);
}
