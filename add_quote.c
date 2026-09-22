/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
 ** STRICTLY ADHERED TO THE TENURES OF THE
 ** OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
 */
 
#include <stdio.h>		// IO prototype functions
#include "project4.h"	// project 4 specific functions

/* Adds a quote entered by the user to the list */
void add_quote(Node **headPtr, struct author **authorList, int *quoteCt) {
	struct Data d;
	add_quote_and_author(&d);

	// gets date	
	printf("Enter today's date (xx/xx/xxxx): ");
	scanf("%d/%d/%d", &d.date.month, &d.date.day, &d.date.year);
	// gets rid of trailing lines/spaces
	int c;
	while ((c = getchar()) != '\n' && c != EOF);
	
	/* Making key */
	d.key = (d.date.year << 16) | (d.date.month << 8) | d.date.day;

	*headPtr = insert_node(headPtr, &d, quoteCt);
	create_author_list(authorList, &d);
	
	printf("The following has been added to the file:\nQuote: %s\nAuthor: %s\nDate Entered: %d/%d/%d\n\n", d.quote, d.author, d.date.month, d.date.day, d.date.year);
			
}
