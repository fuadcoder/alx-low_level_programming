#include "main.h"

/**
 * append_text_to_file - it appends the text at the end of a file
 * @filename: it assign a pointer to the name of a file
 * @text_content:this is the string to be added to the end of the file
 *
 * Return: if function fails or filename NULL --1, Otherwise -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int output, w, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	output = open(filename, O_WRONLY | O_APPEND);
	w = write(output, text_content, length);

	if (output == -1 || w == -1)
		return (-1);

	close(output);

	return (1);
}
