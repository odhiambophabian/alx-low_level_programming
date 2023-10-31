#include "main.h"
#include <stdio.h>

/**
 * error_file - checks if a file is opened and handle errors
 * @file_from: initial file to copy from and to check
 * Return: no return
 */
void error_file(int file_name, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Errror: Can't read from file %s\n", argv
