/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
 ** STRICTLY ADHERED TO THE TENURES OF THE
 ** OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
 */
 
#include <stdio.h>		// IO prototype functions
#include "project4.h"	// project 4 specific functions

/* Finds a Node given a key */
Node *find_quote(Node **headPtr, int key, Node **prior) {
	Node *traversePtr = *headPtr;
	*prior = NULL;
	while (traversePtr != NULL && traversePtr->Quote.key != key) {
		*prior = traversePtr;
		traversePtr = traversePtr->next;
	}
	
	/* Quote not found */
	if (traversePtr == NULL) {
		printf("\nQuote not found.\n");
	} 
	
	return traversePtr;
}