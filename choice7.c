/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
 ** STRICTLY ADHERED TO THE TENURES OF THE
 ** OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
 */

#include <stdio.h>      // IO prototype functions
#include "project4.h"   // project 4 specific functions

void choice7(int *quoteCt, const char *fileName, Node **headPtr) {
	void (*saveQuotesPtr)(const char *fileName, Node **headPtr) = save_quotes;
	saveQuotesPtr(fileName, headPtr);
	printf("A total of %d quotes were written to file %s\n", *quoteCt, fileName);
}
