# QuoteFileManager
Reads an input file’s contents and parsed quote information, such as quote, author name, and date. Has a menu that user can interact with to add, delete, and modify file contents.

BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES 
OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
THIS IS THE README FILE FOR PROJECT 4.

Name: Vy Nguyen
Total time: 30 hours
Concerns/Problems/Discoveries: I had problems with writing my functions to be less than 
or equal to 10 lines. I would often have the logic down and have it compile, but since 
it would be over 10 lines, I would have to create helper functions and passing the data 
back and forth created some issues regarding segmentation faults. Specifically my read_data
function and its helper functions. I had to debug and rework my logic so that read_data and
its helper functions wouldn't truncate long quotes or have trailing characters and were 
less than or equal to 10 lines. 
GDB usage: I used gdb to find the bug in my save_quotes function. I had reworked it a 
few times, and had forgotten to close the file pointer I opened after the function was 
complete. When running through with gdb, I realized I had forgotten to move the file close
from main to save_quotes. I set break points in option_menu and save_quotes to get a clear
understanding of what each line would do and where I still had accessible data after exiting
the program.
