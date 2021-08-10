#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success or file exists and -1 on failure or file does not exist
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op = 0, wr = 0, textsize = 0, cl = 0;

	if (filename == NULL)
		return (-1);
	op = open(filename, O_WRONLY | O_APPEND);
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
