#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void cp(int argc, char *argv[]);
void close_dp(int fd);
void fd_one_read_error(char *arg);
void fd_two_write_error(char *arg2);

#endif
