/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
 ** STRICTLY ADHERED TO THE TENURES OF THE
 ** OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
 */
 
#include <stdio.h>		// IO prototype functions
#include "project4.h"	// project 4 specific functions
#include <string.h>		// string functions
#include <stdlib.h>		// m/calloc related functions
/* Finding author in authorList to see if needs to be
 ** removed here or whether quote count is to be decremented. 
 ** Based on option 6.
 */
void adjust_author(struct author **authorList, char *name) {
			struct author *a = *authorList;
			struct author *p = NULL;
			while (a != NULL && strcmp(a->author_name, name) != 0) {
				p = a;
				a = a->next;				
			}
			
			if (!a) return; 	// prevents null dereferencing

			if (a->count > 1) {
				a->count--;
				return;
			}
			
			if (p == NULL) {
				*authorList = a->next;
			} else {
				p->next = a->next;
			}
			free(a);
}
