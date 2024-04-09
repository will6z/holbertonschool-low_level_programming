#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#define BUFSIZE 1204

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int validate_arguments(int argc, char *argv[]);
int copy_files(const char *src, const char *dest);
/**int main(int argc, char *argv[]);*/

#endif
