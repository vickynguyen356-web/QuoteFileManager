/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
 ** STRICTLY ADHERED TO THE TENURES OF THE
 ** OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
 */

#include "project4.h"   // project 4 specific function prototypes 
#include <string.h>		// string functions

int quote_complete(char *line) {
	return strstr(line, " - ") != NULL;
}