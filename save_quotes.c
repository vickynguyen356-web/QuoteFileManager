/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
 *
 ** STRICTLY ADHERED TO THE TENURES OF THE
 ** OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
 */
 
#include <stdio.h>		// IO prototype functions
#include "project4.h"	// project 4 specific functions

void save_quotes(const char *fileName, Node **headPtr) {
	FILE *out = fopen(fileName, "w");
	Node *traversePtr = *headPtr;
	while (traversePtr != NULL) {
		fprintf(out, "%s - %s\n", traversePtr->Quote.quote, traversePtr->Quote.author);
        fprintf(out, "%d/%d/%d\n\n", traversePtr->Quote.date.month, traversePtr->Quote.date.day, traversePtr->Quote.date.year);
        traversePtr = traversePtr->next;
	}
	fclose(out);
}
