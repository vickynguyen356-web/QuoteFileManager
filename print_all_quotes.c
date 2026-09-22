/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
 ** STRICTLY ADHERED TO THE TENURES OF THE
 ** OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
 */

#include <stdio.h>		// IO prototype functions
#include "project4.h"		// project 4 specific functions

/* Prints all the quotes in the list */
void print_all_quotes(FILE *out, Node **headPtr) {
	Node *traversePtr = *headPtr;
	while (traversePtr != NULL) {
		fprintf(out, "Quote: %s\n", traversePtr->Quote.quote);
		fprintf(out, "Author: %s\n", traversePtr->Quote.author);
		fprintf(out, "Date Entered: %d/%d/%d\n\n", traversePtr->Quote.date.month, traversePtr->Quote.date.day, traversePtr->Quote.date.year);
		traversePtr = traversePtr->next;
	}
}
