/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
 ** STRICTLY ADHERED TO THE TENURES OF THE
 ** OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
 */

#include <stdio.h>      // IO prototype functions 
#include "project4.h"   // project 4 specific function prototypes 
#include <stdlib.h>		// m/calloc related functions

void option_menu(Node **headPtr, struct author **authorList, int *quoteCt, const char *fileName) {
	int choice = 1;
	while ((choice >= 1) && (choice <= 6)){
        printf("Please enter an option between 1 and 7:\n1) Print Quote Entered on a Specific Date"
                "\n2) Print Authors included in this list\n"
				"3) Print All Quotes by a Specific Author\n"
                "4) Print All Quotes\n"
                "5) Add a New Quote\n"
                "6) Delete a Quote\n"
                "7) Exit Program\n\nOption: ");
                scanf("%d", &choice);

        if (choice == 1) {
            choice1(headPtr);
        } else if (choice == 2) {
            choice2(authorList);
        } else if (choice == 3) {
            choice3(headPtr);
        } else if (choice == 4) {
            choice4(headPtr);
        } else if (choice == 5) {
            choice5(headPtr, authorList, quoteCt);
        } else if (choice == 6) {
            choice6(headPtr, authorList, quoteCt);
        } else {
	    choice7(quoteCt, fileName, headPtr);
	}	
    }
}
