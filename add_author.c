/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAE
 ** STRICTLY ADHERED TO THE TENURES OF THE
 ** OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
 */	
 
#include <stdio.h>		// IO prototype functions
#include "project4.h"	// project 4 specific functions
#include <string.h>	// string manipulation functions
#include <stdlib.h>	// m/calloc functions
 
 /* Adds author in between two other authors according to alphabetical 
  ** order or at the end of the authorList 
  */
void add_author(struct author **authorList, struct author *name) {
	 struct author *traverse = *authorList;
	 struct author *prev = NULL;

	 while (traverse && strcmp(traverse->author_name, name->author_name) < 0) {
		 prev = traverse;
		 traverse = traverse->next;
	 }

	 /* if author found */
	 if (traverse && strcmp(traverse->author_name, name->author_name) == 0) {
		 traverse->count++;
		 free(name);
		 return;
	 }
	
	 if (prev == NULL) {
		 // at head of list 
		 name->next = *authorList;
		 *authorList = name;
	 } else {
		 name->next = traverse;
		 prev->next = name;
	 }
}		
