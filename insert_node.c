/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
 ** STRICTLY ADHERED TO THE TENURES OF THE
 ** OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
 */

#include "project4.h"	// project 4 specific functions
#include <stdlib.h>	// m/calloc related functions

/* Inserts a node to the list */
Node *insert_node(Node **headPtr, struct Data *info, int *quoteCt) {
	Node *n = create_node(info);
	if((*headPtr == NULL) || (info->key) < ((*headPtr)->Quote.key)) {
		n->next = *headPtr;
		*headPtr = n;
		(*quoteCt)++;

		return *headPtr;
	}

	Node *prior = *headPtr;
	while (prior->next && prior->next->Quote.key < info->key) {
		prior = prior->next;
	}
	n->next = prior->next;
	prior->next = n;
	(*quoteCt)++;

	return *headPtr;
}
