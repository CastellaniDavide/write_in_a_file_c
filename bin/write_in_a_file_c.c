/**
 * @file write_in_a_file_c.cpp
 *
 * @version 01.01 2020-08-15
 *
 * @brief An example where I write in a file in c
 *
 * @ingroup write_in_a_file_c
 * (Note: this needs exactly one @defgroup somewhere)
 *
 * @author Castellani Davide
 *
 * Contact: contacts@castellanidavide.it
 *
 */
#include <stdio.h>
#include <time.h>

int main()
{
	// Create file variable
	FILE *logPtr;

	if ((logPtr = fopen("./../log/trace.log", "a")) == NULL)
	{
		puts("There was an error, I can't open the file");
	}
	else // File opened
	{
		time_t rawtime;
		time(&rawtime);

		fprintf(logPtr, "Current local time and date: %s", asctime(localtime(&rawtime))); // Write on the file the date
		printf("Current local time and date: %s", asctime(localtime(&rawtime)));
	}

	// Close file
	fclose(logPtr);
	return 0;
}