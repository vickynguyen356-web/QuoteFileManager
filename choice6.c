/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
 ** STRICTLY ADHERED TO THE TENURES OF THE
 ** OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
 */

#include <stdio.h>      // IO prototype functions 
#include "project4.h"   // project 4 specific function prototypes 

/* Points to function to delete a quote from the list */
void choice6(Node **headPtr, struct author **authorList, int *quoteCt) {
			/* I named the function option_six because I 
			had delete_quote logic inside a delete_quote.c file */
            void (*deleteQuotePtr)(Node **headPtr, struct author **authorList, int *quoteCt) = option_six;
            deleteQuotePtr(headPtr, authorList, quoteCt);
}
