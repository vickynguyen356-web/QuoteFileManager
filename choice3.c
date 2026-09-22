/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
 ** STRICTLY ADHERED TO THE TENURES OF THE
 ** OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
 */

#include <stdio.h>      // IO prototype functions 
#include "project4.h"   // project 4 specific function prototypes 

/* Points to the function that prints all quotes by a specific author */
void choice3(Node **headPtr) {
		void (*authorQuotesPtr)(Node **headPtr) = print_quotes_by_author;
		authorQuotesPtr(headPtr);
}
