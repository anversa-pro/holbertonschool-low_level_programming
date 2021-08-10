#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the standard output.
 *
 * @filename: pointer to file with test to print
 * @letters: number of letters it should read and print
 * Return: number of letters or 0 if NULL o the file can not be opened
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int op = 0, rd = 0, wr = 0, cl = 0;
	char *tempbuffer;

	tempbuffer = malloc(sizeof(char) * letters);
	if (tempbuffer == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	op = open(filename, O_RDWR);
	if (op == -1)
		return (0);

	rd = read(op, tempbuffer, letters);
	tempbuffer[letters] = '\0';
	if (rd == -1)
		return (0);

	wr = write(STDOUT_FILENO, tempbuffer, rd);
	if (wr == -1)
		return (0);

	cl = close(op);
	if (cl == -1)
		return (0);

	free(tempbuffer);
	return (rd);
}
