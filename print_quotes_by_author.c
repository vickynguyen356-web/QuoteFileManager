/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
 ** STRICTLY ADHERED TO THE TENURES OF THE
 ** OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
 */
 
#include <stdio.h>		// IO prototype functions
#include "project4.h"	// project 4 specific functions
#include <string.h>		// string manipulation functions

/* Prints all the quotes by a specific author */
void print_quotes_by_author(Node **headPtr) {
	char name[100];
	printf("\nEnter Author Name: ");
	scanf(" %[^\n]", name);
	
	/* Finds all quotes by author and prints */
	Node *traversePtr = *headPtr;
	while (traversePtr != NULL) {
		if (strstr(traversePtr->Quote.author, name) != NULL) {
			printf("\nQuote: %s\nAuthor: %s\n", traversePtr->Quote.quote, traversePtr->Quote.author);
			printf("Date entered: %d/%d/%d\n", traversePtr->Quote.date.month, traversePtr->Quote.date.day, traversePtr->Quote.date.year);
		}
		traversePtr = traversePtr->next;
	}
	printf("\n");	// formatting
}
