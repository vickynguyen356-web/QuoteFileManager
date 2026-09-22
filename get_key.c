/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
 ** STRICTLY ADHERED TO THE TENURES OF THE
 ** OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
 */

#include <stdio.h>      // IO prototype functions
#include <stdlib.h>     // m/calloc related functions
#include "project4.h"

/* Makes the key for the quote being read in */
void get_key(FILE *filePtr, struct Data *d) {
	fscanf(filePtr, " %d/%d/%d", &d->date.month, &d->date.day, &d->date.year);
	d->key = (d->date.year << 16) | (d->date.month << 8) | d->date.day;
}
