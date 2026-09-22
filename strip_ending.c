/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
 ** STRICTLY ADHERED TO THE TENURES OF THE
 ** OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
 */	

#include <string.h>		// string manipulation functions

/* Removes the ^M showing up in the last author */
void strip_ending(char *s) {
	char *end = s + strlen(s);
	while (end > s && (*(end - 1) == ' ' || *(end - 1) == '\r' || *(end - 1) == '\n' || *(end - 1) == '\t')) {
			*(--end) = '\0';
	}
}
