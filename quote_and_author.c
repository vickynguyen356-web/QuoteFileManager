/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
 ** STRICTLY ADHERED TO THE TENURES OF THE
 ** OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
 */

#include <stdio.h>      // IO prototype functions
#include <stdlib.h>     // m/calloc related functions
#include "project4.h"   // project 4 specific functions
#include <string.h>     // string manipulation functions

/* Extracts one quote and author from the file being read */
void quote_and_author(char *buffer, struct Data *d) {
	char line[1200] = "";
	strncat(line, buffer, sizeof(line) - strlen(line) - 1);
	if (!strstr(buffer, " - ")) {
		strcat(line, " ");
		return;
	}
	char *separator = strrstr(line, " - ");		// finds last " - "
	if (separator == NULL) return;
	*separator = '\0';
	strncpy(d->quote, line, sizeof(d->quote) - 1);
	(*(d->quote + sizeof(d->quote) - 1)) = '\0';

	strncpy(d->author, separator + 3, sizeof(d->author) - 1);
	(*(d->author + sizeof(d->author) - 1));
	strip_ending(d->author);
}

