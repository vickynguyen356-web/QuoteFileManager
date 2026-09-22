/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
 ** STRICTLY ADHERED TO THE TENURES OF THE
 ** OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
 */

#include <stdio.h>		// IO prototype functions
#include <stddef.h>		// type def functions

struct Date_entered{
	int day;
	int month;
	int year;
};
struct Data {
	char quote[750];
	char author[100];
	int key;
	struct Date_entered date;
};
typedef struct Node {
	struct Data Quote;
	struct Node *next;
} Node;
struct author{
	char author_name[100];
	int count;	/* optional depending on implementation */
	struct author *next;
};

/* Function prototypes */
/* Reading data and creating linked list for quotes functions */
void get_key(FILE *filePtr, struct Data *d);
void quote_and_author(char *buffer, struct Data *d);
void read_data(FILE *filePtr, Node **headPtr, struct author **authorList, int *quoteCt);
Node *create_node(struct Data *info);
Node *insert_node(Node **headPtr, struct Data *info, int *quoteCt);
void create_author_list(struct author **authorList, struct Data *info);
void add_author(struct author **authorList, struct author *name);
char *strrstr(const char *line, const char *findChar);
void strip_ending(char *s);
FILE *open_file(const char *fileName, const char *mode);
void clear_buffer(char *line);

/* Functions for options menu */
void option_menu(Node **headPtr, struct author **authorList, int *quoteCt, const char *fileName);

/* option 1*/
void choice1(Node **headPtr);
void print_quote(Node **headPtr, int month, int day, int year);

/* option 2*/
void choice2(struct author **authorList);
void print_authors(struct author **authorList);

/* option 3*/
void choice3(Node **headPtr);
void print_quotes_by_author(Node **headPtr);

/* option 4 */
void choice4(Node **headPtr);
void print_all_quotes(FILE *out, Node **headPtr);

/* option 5 */
void choice5(Node **headPtr, struct author **authorList, int *quote);
void add_quote(Node **headPtr, struct author **authorList, int *quoteCt);
void add_quote_and_author(struct Data *d);

/* option 6 */
void choice6(Node **headPtr, struct author **authorList, int *quoteCt);
void option_six(Node **headPtr, struct author **authorList, int *quoteCt);
void delete_quote(Node **headPtr, Node *n, Node *prior, struct Data *d, int *quoteCt, struct author **authorList);
int user_delete_choice(int key, char *quote);
Node *find_quote(Node **headPtr, int key, Node **prior);
struct Data *create_data_key(struct Data *d);
void adjust_author(struct author **authorList, char *name);

/* option 7 */
void choice7(int *quoteCt, const char *fileName, Node **headPtr);
void save_quotes(const char *fileName, Node **listHeadPtr);

void free_list(Node *head);
void free_author_list(struct author *head);

