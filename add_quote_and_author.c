/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
 ** STRICTLY ADHERED TO THE TENURES OF THE
 ** OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY */
	
#include <stdio.h>	// IO prototype functions
#include "project4.h"	// project 4 specific functions

/* Reads in a quote and author from option 5 */
void add_quote_and_author(struct Data *d) {
	printf("Enter the Quote: ");
	scanf(" %749[^\n]", d->quote);
	// gets rid of trailing lines/spaces
	int c;
	while (c = getchar() != '\n' && c != EOF);

	printf("Enter the Author: ");
	scanf(" %99[^\n]", d->author);
	while (c = getchar() != '\n' && c != EOF);
}
