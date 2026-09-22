/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
 ** STRICTLY ADHERED TO THE TENURES OF THE
 ** OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
 */
 
#include <stdio.h>		// IO prototype functions
#include "project4.h"	// project 4 specific functions
#include <stdlib.h>		// m/calloc related functions
#include <string.h>		// string functions

/* Deleting a quote option */
void option_six(Node **headPtr, struct author **authorList, int *quoteCt) {
	if (*headPtr == NULL) {
		printf("\nList is empty.\n");
		return;
	}
	
	struct Data d;
	/* Gets the key the user wants to delete */
	create_data_key(&d);
	
	/* Finding quote to delete */
	Node *prior = NULL;
	Node *n = find_quote(headPtr, d.key, &prior);

	if (n != NULL) {
		/* Quote is found */
		int i = user_delete_choice(d.key, n->Quote.quote);
		
		/* Deleting quote and decrementing author quote count or
		removing author */
		if (i != 1) {
			printf("\n");	// formatting
			return; // User did not want to delete quote
		}
		Node *next = n->next;
		delete_quote(headPtr, n, prior, &d, quoteCt, authorList);
		n = next;	// doesn't use deleted node
	}
}
