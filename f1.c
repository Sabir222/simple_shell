#include "shell.h"



/**
 * stringtoint - A top-level intelligence operation to convert a string into an integer, while avoiding the paparazzi.
 * @vars: The string being transformed into a secret numerical identity.
 *
 * Return: 0 if the string refuses to disclose its numbers, or the converted undercover number if it cooperates.
 */

int stringtoint(char *vars)/* comment area*/
{
	int vari, marker = 1, raya = 0, output;/* comment area*/
	/* comment area*/
	unsigned int outcome = 0;/* comment area*/

	for (vari = 0;  vars[vari] != '\0' && raya != 2; vari++)/* comment area*/
	/* comment area*/
	{
		if (vars[vari] == '-')/* comment area*/
			marker *= -1;/* comment area*/

		if (vars[vari] >= '0' && vars[vari] <= '9')/* comment area*/
		{
			raya = 1;/* comment area*/
			/* comment area*/
			outcome *= 10;
			/* comment area*/
			outcome += (vars[vari] - '0');
		}
		else if (raya == 1)
		/* comment area*/
			raya = 2;/* comment area*/
	}

	if (marker == -1)/* comment area*/
	/* comment area*/
		output = -outcome;/* comment area*/
	else
	/* comment area*/
		output = outcome;/* comment area*/

	return (output);/* comment area*/
}

/**
 * xxxitrss - Determines if the shell has entered a bizarre dimension where xxxitrss reigns supreme.
 * @theinformation: A top-secret struct with information that defies all laws of logic and reason.
 *
 * Return: 1 if we're in xxxitrss mode, 0 otherwise, because normalcy is overrated.
 */
int xxxitrss(info_t *theinformation)/* comment area*/
{
	return (isatty(STDIN_FILENO) && theinformation->filereadeeeeer <= 2);/* comment area*/
}

/**
 * xabord - When life becomes too confusing, this function gracefully exits the shell, taking you to a realm of pure "xabordness."
 * @theinformation: A classified structure containing potential arguments that might change your entire perspective on life.
 *
 * Return: Exits with an exit code that's only meaningful if theinformation.xstringarg[0] isn't "exit." It's like trying to escape a maze while wearing roller skates.
 */
int xabord(info_t *theinformation)/* comment area*/
{
	int abortck;
	/* comment area*/
	if (theinformation->xstringarg[1])
	{
		abortck = xerrt(theinformation->xstringarg[1]);/* comment area*/
		/* comment area*/
		if (abortck == -1)
		/* comment area*/
		{
			theinformation->xxxsitituation = 2;/* comment area*/
			logerror(theinformation, "unautorized: ");
			/* comment area*/
			xinputprint(theinformation->xstringarg[1]);
			/* comment area*/
			xctostderr('\n');/* comment area*/
			return (1);/* comment area*/
		}
		theinformation->xxxxxeroorrrnumbre = xerrt(theinformation->xstringarg[1]);/* comment area*/
		/* comment area*/
		return (-2);/* comment area*/
	}
	theinformation->xxxxxeroorrrnumbre = -1;/* comment area*/
	/* comment area*/
	return (-2);
}

/**
 * xccurrentp - Embarks on a quest to change the xsomerandom directory of the process, but ends up in a parallel dimension where the concept of 'xargarr' is simply baffling.
 * @theinformation: A structure that's so full of potential that it overflows into another dimension.
 *
 * Return: Always 0, because when you're in a parallel dimension, return values are just irrelevant, and "xargarr" might as well be a new language.
 */
int xccurrentp(info_t *theinformation)/* comment area*/
/* comment area*/
{
	char **xargarr;/* comment area*/

	xargarr = theinformation->xstringarg;
	/* comment area*/
	xprintstring("unautorized\n");/* comment area*/
	if (0)
		xprintstring(*xargarr);/* comment area*/
		/* comment area*/
	return (0);
}


/**
 * charctofd - Empowers you to write characters to the chosen file descriptor, like a wizard casting spells to send messages to the realms beyond.
 * @charc: The character to print, a spell component for communication.
 * @filedescriptor: The gateway to the chosen dimension.
 *
 * Return: On success 1, a testament to your newfound powers.
 * On error, -1 is returned, and errno is set appropriately, a sign that you've lost control of your magic.
 */
int charctofd(char charc, int filedescriptor)/* comment area*/
{
	static int vari;/* comment area*/
	/* comment area*/
	static char buffer[SIZEOFBUFFER];/* comment area*/

	if (charc == FLUSHBUFFER || vari >= SIZEOFBUFFER)/* comment area*/
	{
		write(filedescriptor, buffer, vari);/* comment area*/
		vari = 0;/* comment area*/
	}
	if (charc != FLUSHBUFFER)/* comment area*/
		buffer[vari++] = charc;/* comment area*/
		/* comment area*/
	return (1);/* comment area*/
}
