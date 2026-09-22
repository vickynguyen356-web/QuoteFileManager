# BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE
# STRICTLY ADHERED TO THE TENURES OF THE
# OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY.

gcc_opt = -std=c99 -pedantic -Wimplicit-function-declaration -Wreturn-type -Wformat -g -c

# compiles all .c into .o
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

# all target
all: Project4.zip Project4

# zip file that's submitted to Carmen
Project4.zip: Makefile Project4Readme $(SRC) *.h
	zip Project4.zip Makefile Project4Readme $(SRC) *.h

# Project 4 executable
Project4: Project4main.o get_key.o quote_and_author.o open_file.o  option_menu.o choice1.o choice2.o choice3.o choice4.o choice5.o choice6.o choice7.o add_author.o add_quote.o add_quote_and_author.o adjust_author.o create_author_list.o create_data_key.o create_node.o delete_quote.o find_quote.o free_author_list.o free_list.o insert_node.o option_six.o print_all_quotes.o print_authors.o print_quote.o print_quotes_by_author.o read_data.o save_quotes.o strip_ending.o strrstr.o user_delete_choice.o
	gcc Project4main.o get_key.o quote_and_author.o open_file.o option_menu.o choice1.o choice2.o choice3.o choice4.o choice5.o choice6.o choice7.o add_author.o add_quote.o add_quote_and_author.o adjust_author.o create_author_list.o create_data_key.o create_node.o delete_quote.o find_quote.o free_author_list.o free_list.o insert_node.o option_six.o print_all_quotes.o print_authors.o print_quote.o print_quotes_by_author.o read_data.o save_quotes.o strip_ending.o strrstr.o user_delete_choice.o -o Project4 

# Project4main.o 
Project4main.o: Project4main.c
	gcc $(gcc_opt) Project4main.c

# read_data.o
read_data.o: read_data.c
	gcc $(gcc_opt) read_data.c

# get_key.o
get_key.o: get_key.c
	gcc $(gcc_opt) get_key.c;

# quote and author
quote_and_author.o: quote_and_author.c
	gcc $(gcc_opt) quote_and_author.c


# open_file.o
open_file.o: open_file.c
	gcc $(gcc_opt) open_file.c
	
# option_menu.o 
option_menu.o: option_menu.c 
	gcc $(gcc_opt) option_menu.c

# choice1.o
choice1.o: choice1.c
	gcc $(gcc_opt) choice1.c

# choice2.o
choice2.o: choice2.c
	gcc $(gcc_opt) choice2.c

# choice3.o
choice3.o: choice3.c
	gcc $(gcc_opt) choice3.c

# choice4.o
choice4.o: choice4.c
	gcc $(gcc_opt) choice4.c

# choice5.o
choice5.o: choice5.c
	gcc $(gcc_opt) choice5.c

# choice6.o
choice6.o: choice6.c
	gcc $(gcc_opt) choice6.c

# choice7.o
choice7.o: choice7.c
	gcc $(gcc_opt) choice7.c

# add_author.o
add_author.o: add_author.c
	gcc $(gcc_opt) add_author.c
	
# add_quote.o
add_quote.o: add_quote.c
	gcc $(gcc_opt) add_quote.c
	
# add_quote_and_author.o 
add_quote_and_author.o: add_quote_and_author.c
	gcc $(gcc_opt) add_quote_and_author.c

# adjust_author.o
adjust_author.o: adjust_author.c
	gcc $(gcc_opt) adjust_author.c
	
# create_author_list.o
create_author_list.o: create_author_list.c
	gcc $(gcc_opt) create_author_list.c
	
# create_data_key.o
create_data_key.o: create_data_key.c
	gcc $(gcc_opt) create_data_key.c
	
# create_node.o
create_node: create_node.c
	gcc $(gcc_opt) create_node.c
	
# delete_quote.o
delete_quote.o: delete_quote.c
	gcc $(gcc_opt) delete_quote.c
	
# find_quote.o
find_quote.o: find_quote.c
	gcc $(gcc_opt) find_quote.c
	
# free_author_list.o
free_author_list.o: free_author_list.c
	gcc $(gcc_opt) free_author_list.c
	
# free_list.o
free_list.o: free_list.c
	gcc $(gcc_opt) free_list.c
	
# insert_node.o
insert_node.o: insert_node.c
	gcc $(gcc_opt) insert_node.c
	
# option_six.o
option_six.o: option_six.c
	gcc $(gcc_opt) option_six.c
	
# print_all_quotes.o
print_all_quotes.o: print_all_quotes.c
	gcc $(gcc_opt) print_all_quotes.c
	
# print_authors.o
print_authors.o: print_authors.c
	gcc $(gcc_opt) print_authors.c
	
# print_quote.o
	gcc $(gcc_opt) print_quote.c
	
# print_quotes_by_author.o
print_quotes_by_author.o: print_quotes_by_author.c
	gcc $(gcc_opt) print_quotes_by_author.c
	
# save_quotes.o
save_quotes.o: save_quotes.c
	gcc $(gcc_opt) save_quotes.c
	
# strip_ending.o
strip_ending.o: strip_ending.c
	gcc $(gcc_opt) strip_ending.c
	
# strrstr.o
strrstr.o: strrstr.c
	gcc $(gcc_opt) strrstr.c
	
# user_delete_choice.o
user_delete_choice.o: user_delete_choice.c
	gcc $(gcc_opt) user_delete_choice.c
	
# deletes all files from Makefile
clean:
	rm -rf *.o Project4 Project4.zip
