/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
 ** STRICTLY ADHERED TO THE TENURES OF THE
 ** OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
 */	
 
/* Finds the last occurrence of findChar */
#include <string.h>		// string manipulation functions
char *strrstr(const char *line, const char *findChar) {
	char *last = NULL;
	char *p;
	while ((p = strstr(line, findChar))) {
		last = p;
		line = p + 1;
	}
	return last;
}