/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
 ** STRICTLY ADHERED TO THE TENURES OF THE
 ** OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
 */

#include <stdio.h>      // IO prototype functions 
#include "project4.h"   // project 4 specific function prototypes 

/* Points to function that prints all quotes in list */
void choice4(Node **headPtr) {
		void (*printQuotesPtr)(FILE *out, Node **headPtr) = print_all_quotes;
        printQuotesPtr(stdout, headPtr);
}
