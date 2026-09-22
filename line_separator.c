/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
 ** STRICTLY ADHERED TO THE TENURES OF THE
 ** OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
 */

#include <string.h>	// string functions
#include "project4.h"   // project 4 specific function prototypes 

int line_separator(const char *buffer) {
	return strstr(buffer, " - ") != NULL;
}
