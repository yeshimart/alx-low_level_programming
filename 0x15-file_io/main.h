#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/*
 * This function reads a text file and returns the number of bytes read.
 *
 * This function creates a new file and writes the given text content to it.
 *
 * This function appends the given text content to the end of an existing file.
 */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
