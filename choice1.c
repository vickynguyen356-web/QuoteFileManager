/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
 ** STRICTLY ADHERED TO THE TENURES OF THE
 ** OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
 */

#include <stdio.h>      // IO prototype functions 
#include "project4.h"   // project 4 specific function prototypes 

/* Points to function to print out quote based on date entered */
void choice1(Node **headPtr) {
	int month, day, year;
	void (*printQuotePtr)(Node **headPtr, int month, int day, int year) = print_quote;
	printQuotePtr(headPtr, month, day, year);
}