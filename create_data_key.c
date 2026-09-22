/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
 ** STRICTLY ADHERED TO THE TENURES OF THE
 ** OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
 */
 
#include <stdio.h>		// IO prototype functions
#include "project4.h"	// project 4 specific functions
#include <stdlib.h>		// m/calloc related functions

/* Gets the key of the quote the user wishes to delete */
struct Data *create_data_key(struct Data *d) {
	printf("\nPlease enter the date of the quote you wish to delete, (xx/xx/xxxx) ");
	scanf("%d/%d/%d", &d->date.month, &d->date.day, &d->date.year);
	d->key = (d->date.year << 16) | (d->date.month << 8) | d->date.day;
	
	return d;
}
