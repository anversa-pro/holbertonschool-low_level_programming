#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - Create a file object
 * @filename: name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int op = 0, wr = 0, textsize = 0, cl = 0;

	if (filename == NULL)
		return (-1);
	op = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (op == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	else
	{
		for (; text_content[textsize]; textsize++)
			continue;
		wr = write(op, text_content, textsize);
		if (wr == -1)
			return (-1);
	}
	cl = close(op);
	if (cl == -1)
		return (-1);
	return (1);
}
