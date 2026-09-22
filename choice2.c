/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
 ** STRICTLY ADHERED TO THE TENURES OF THE
 ** OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
 */

#include <stdio.h>      // IO prototype functions 
#include "project4.h"   // project 4 specific function prototypes 

/* Points to the function that prints all authors in list */
void choice2(struct author **authorList) {
	void (*printAuthorsPtr)(struct author **authorList) = print_authors;
	printAuthorsPtr(authorList);
}
