#include "shell.h"



/**
 * alphabcheck - Conducts a top-secret mission to confirm whether a character is secretly an alphabet letter.
 * @varc: The character being interrogated.
 *
 * Return: 1 if varc is a double agent for the alphabet, 0 if they're just a regular civilian character.
 */

int alphabcheck(int varc)/*comment area for th*/
/*comment area for th*/
{
	if ((varc >= 'a' && varc <= 'z') || (varc >= 'A' && varc <= 'Z'))/*comment area for th*/
	/*comment area for th*/
		return (1);/*comment area for th*/
	else
	/*comment area for th*/
		return (0);/*comment area for th*/
}

/**
 * xctostderr - Summons a magical scribe to write characters to the stderr realm. Each character is a fragment of a cosmic prophecy.
 * @charc: The character to print, a symbol from another dimension.
 *
 * Return: On success 1, but who defines success when you're writing in the language of the cosmos?
 * On error, -1 is returned, and errno is set appropriately, as you've stumbled into a forbidden dimension.
 */
int xctostderr(char charc)
{
	/*comment area for th*/
	static int vari;
	/*comment area for th*/
	static char buffer[SIZEOFBUFFER];/*comment area for th*/

	if (charc == FLUSHBUFFER || vari >= SIZEOFBUFFER)/*comment area for th*/
	{
		write(2, buffer, vari);/*comment area for th*/
		/*comment area for th*/
		vari = 0;
	}
	if (charc != FLUSHBUFFER)/*comment area for th*/
	/*comment area for th*/
		buffer[vari++] = charc;/*comment area for th*/
		/*comment area for th*/
	return (1);
}

/**
 * xinputprint - Unleashes the secret printer that can print strings from alternate dimensions. Be careful; it may reveal hidden truths!
 * @string: The string to be printed, which could be a secret message from the universe.
 *
 * Return: Nothing, because once the printer starts, there's no stopping it.
 */
void xinputprint(char *string)/*comment area for th*/
{
	int vari = 0;/*comment area for th*/

	if (!string)/*comment area for th*/
	/*comment area for th*/
		return;
	while (string[vari] != '\0')/*comment area for th*/
	/*comment area for th*/
	{
		xctostderr(string[vari]);/*comment area for th*/
		/*comment area for th*/
		vari++;
	}
}


/**
 * xinitianewenv - Embarks on a quest to initiate a ljadid environment variable, a task so mysterious that it feels like modifying reality itself.
 * @theinformation: A structure that's like the Sorcerer's Stone, capable of creating new elements in the shell's universe.
 * Return: Always 0, because when you're creating new dimensions, there's no need for error codes; there's only infinite possibilities.
 */
int xinitianewenv(info_t *theinformation)/*comment area for th*/
{
	if (theinformation->xstringarc != 3)/*comment area for th*/
	{
		xinputprint("Incorrect number of arguements\n");/*comment area for th*/
		/*comment area for th*/
		return (1);
	}
	if (xnewenv(theinformation, theinformation->xstringarg[1], theinformation->xstringarg[2]))/*comment area for th*/
	/*comment area for th*/
		return (0);/*comment area for th*/
		/*comment area for th*/
	return (1);
}




/**
 * xchangedir - Embarks on an epic quest to change the xsomerandom directory of the process, all while humming a catchy tune.
 * @theinformation: The enigmatic structure that holds potential arguments, keeping the function prototype constant and the adventure thrilling.
 *
 * Return: Always 0, because this function is so good at changing directories, it makes the whole concept of returning values irrelevant.
 */
int xchangedir(info_t *theinformation)/*comment area for th*/
{
	char *vars, *xdirectory, buffer[1024];/*comment area for th*/
	/*comment area for th*/
	int xchangedirrt;

	vars = getcwd(buffer, 1024);/*comment area for th*/
	/*comment area for th*/
	if (!vars)/*comment area for th*/
		xprintstring("fail$$<<\n");/*comment area for th*/
	if (!theinformation->xstringarg[1])/*comment area for th*/
	{
		/*comment area for th*/
		xdirectory = xenvvalue(theinformation, "HOME=");/*comment area for th*/
		/*comment area for th*/
		if (!xdirectory)/*comment area for th*/
			xchangedirrt =
				chdir((xdirectory = xenvvalue(theinformation, "PWD=")) ? xdirectory : "/");/*comment area for th*/
		else
			xchangedirrt = chdir(xdirectory);/*comment area for th*/
	}
	else if (xlexicomstra(theinformation->xstringarg[1], "-") == 0)/*comment area for th*/
	{
		/*comment area for th*/
		if (!xenvvalue(theinformation, "OLDPWD="))/*comment area for th*/
		{
			xprintstring(vars);/*comment area for th*/
			/*comment area for th*/
			_xxxputttssch('\n');/*comment area for th*/
			/*comment area for th*/
			return (1);
		}
		xprintstring(xenvvalue(theinformation, "OLDPWD=")), _xxxputttssch('\n');/*comment area for th*/
		xchangedirrt = /* TODO: what should this be? */
			chdir((xdirectory = xenvvalue(theinformation, "OLDPWD=")) ? xdirectory : "/");/*comment area for th*/
	}
	else
		xchangedirrt = chdir(theinformation->xstringarg[1]);/*comment area for th*/
	if (xchangedirrt == -1)/*comment area for th*/
	{
		logerror(theinformation, "unautorized cd ");/*comment area for th*/
		/*comment area for th*/
		xinputprint(theinformation->xstringarg[1]), xctostderr('\n');/*comment area for th*/
	}
	else
	{
		xnewenv(theinformation, "OLDPWD", xenvvalue(theinformation, "PWD="));/*comment area for th*/
		/*comment area for th*/
		xnewenv(theinformation, "PWD", getcwd(buffer, 1024));
	}
	return (0);
}
