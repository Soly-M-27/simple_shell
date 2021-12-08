/*we need to work on the EOF and ctrl + d thing */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *buffer;
	size_t buffsize = 0;

/*not necessary but visually good to learn*/
	buffer = (char *)malloc(buffsize * sizeof(char));

	if (buffer == NULL)
		exit(1);
/*good learning shit ends here*/

	printf("$ ");

	getline(&buffer, &buffsize, stdin);
	printf("%s", buffer);

	return (0);
}
