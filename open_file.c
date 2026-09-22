/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
 ** STRICTLY ADHERED TO THE TENURES OF THE
 ** OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
 */

#include <stdio.h>      // IO prototype functions 
#include "project4.h"   // project 4 specific function prototypes 
#include <stdlib.h>		// m/calloc related functions

/* Opens a file to read or write from */
FILE *open_file(const char *fileName, const char *mode) {
	FILE *filePtr = NULL;          // points to file that is being read 
    filePtr = fopen(fileName, mode);

    /* Checking if the file was opened successfully */
    if (filePtr == NULL) {
        printf("Error opening file. Please try again.\n");
        exit(1);
    }
    
    return filePtr;
}
