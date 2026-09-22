/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
 ** STRICTLY ADHERED TO THE TENURES OF THE
 ** OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
 */

#include "project4.h"   // project 4 specific function prototypes 
#include <string.h>		// string functions

void read_data(FILE *filePtr, Node **headPtr, struct author **authorList, int *quoteCt) {
	 struct Data d;
    char buffer[900];

    while (fscanf(filePtr, " %899[^\n]\n", buffer) == 1) {
       quote_and_author(buffer, &d);
       get_key(filePtr, &d);
        *headPtr = insert_node(headPtr, &d, quoteCt);
        create_author_list(authorList, &d);
    }
    fclose(filePtr);
}
