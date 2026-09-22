/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
 ** STRICTLY ADHERED TO THE TENURES OF THE
 ** OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
 */

#include <stdio.h>      // IO prototype functions 
#include "project4.h"   // project 4 specific function prototypes 
#include <stdlib.h>

int main(int argc, char *argv[]) {
        /* 1. Read in data from first file */
        printf("Reading information from file \"%s\"\n", *(argv + 1));
        // points to file that is being read 
		FILE *file1Ptr = open_file(*(argv + 1), "r");

	// counts how many quotes are read 
    int quoteCt = 0;
	// points to first author in list
	struct author *authorListPtr = NULL; 
	// head list pointer
	Node *headPtr = NULL;
	read_data(file1Ptr, &headPtr, &authorListPtr, &quoteCt);

    printf("A total of %d quotes were read from the file %s\n\n", quoteCt, *(argv + 1));

    /* User chooses from 7 options */
    option_menu(&headPtr, &authorListPtr, &quoteCt, *(argv + 2));

    /* dynamically allocated variables to free: headPtr, authorListPtr */
        free_list(headPtr);
        free_author_list(authorListPtr);

    return (0);
}
