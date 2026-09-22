/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
 *
 ** STRICTLY ADHERED TO THE TENURES OF THE
 ** OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
 */

#include <stdio.h>      // IO prototype functions 
#include "project4.h"   // project 4 specific function prototypes 

/* Points to function that adds a quote to the list */
void choice5(Node **headPtr, struct author **authorList, int *quoteCt) {
	void (*addQuotePtr)(Node **headPtr, struct author **authorList, int *quoteCt) = add_quote;
            addQuotePtr(headPtr, authorList, quoteCt);
}
