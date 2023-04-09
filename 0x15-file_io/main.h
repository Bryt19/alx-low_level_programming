#ifndef _HOLBERTON_
#define _HOLBERTON_

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

ssize_t read_textfile(const character *filename, size_t letters);
int create_file(const character *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
