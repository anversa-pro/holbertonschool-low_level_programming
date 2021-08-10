#ifndef MAIN_H
#define MAIN_H

/* Function that reads a text file and prints it to the POSIX standard output*/
ssize_t read_textfile(const char *filename, size_t letters);

/* Function that creates a file */
int create_file(const char *filename, char *text_content);

#endif /* MAIN_H*/
