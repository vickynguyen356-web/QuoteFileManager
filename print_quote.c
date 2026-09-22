/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
 ** STRICTLY ADHERED TO THE TENURES OF THE
 ** OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
 */
 
#include "project4.h"		// project 4 specific functions
#include <stdio.h>			// IO prototype functions

/* Prints the quote based on what date was entered */
void print_quote(Node **headPtr, int month, int day, int year) {
	printf("\nEnter quote date: ");
	scanf("%d/%d/%d", &month, &day, &year);
	/* Create key */
	int key = ((unsigned int)year << 16) | ((unsigned int)month << 8) | day;
	Node *traversePtr = *headPtr;
	
	/* Finding key in list */
	while ((traversePtr != NULL) && (traversePtr->Quote.key != key)) {
		traversePtr = traversePtr->next;
	} 
	
	/* Print quote */
	printf("\nQuote: %s\nAuthor: %s\n", traversePtr->Quote.quote, traversePtr->Quote.author);
	printf("Date Entered: %d/%d/%d\n\n", traversePtr->Quote.date.month, traversePtr->Quote.date.day, traversePtr->Quote.date.year);
}
