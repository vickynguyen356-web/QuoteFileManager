/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
 ** STRICTLY ADHERED TO THE TENURES OF THE
 ** OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
 */	
 
#include "project4.h"		// project 4 specific functions
#include <stdlib.h>		// m/calloc related functions

/* Frees all the dynamically allocated memory in the quote list */
void free_list(Node *head) {
	Node *traverse = head;
	while (traverse != NULL) {
		Node *next = traverse->next;	// saves next before freeing
		free(traverse);
		traverse = next;
	}
	head = NULL;
}
