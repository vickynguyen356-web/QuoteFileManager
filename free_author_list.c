/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
 ** STRICTLY ADHERED TO THE TENURES OF THE
 ** OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
 */	
 
#include "project4.h"		// project 4 specific functions
#include <stdlib.h>		// m/calloc related functions

/* Frees all the dynamically allocated memory for the author list */
void free_author_list(struct author *head) {
	struct author *traverse;
	while (head != NULL) {
		traverse = head;
		head = head->next;
		free(traverse);
	}
	traverse = NULL;
}
