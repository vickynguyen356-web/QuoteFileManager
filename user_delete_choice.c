/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
 ** STRICTLY ADHERED TO THE TENURES OF THE
 ** OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
 */
 
#include <stdio.h>		// IO prototype functions
#include "project4.h"	// project 4 specific functions

/* Asks the user if they want to delete the quote */
int user_delete_choice(int key, char *quote) {
	printf("Do you really want to delete key %d, \"%s\"?\nIf yes, enter 1. If no, enter 2: ", key, quote);
		int i;
		scanf("%d", &i);
		return i;
}
