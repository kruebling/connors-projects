#include <stdio.h>

/* C code main */
/* Make the console say "HelloWorld" */
/* Dont overthink it, even if you don't know some of this */
/* Press F5 to run your code */
/* When it works, follow the instructions in the README to push it back up */

void main()
{
	char test[] = "HelloConnor";

	if (strcmp(test, "HelloWorld") != 0)
	{
		return;
	}
	else 
	{
		printf("%s\n", test);
	}


	//ignore this, it adds the press any key to continue
	system("pause");
}