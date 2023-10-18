#include "shell.h"

/**
 * badalstr - A String Substitution
 * @kdiim: The String to Change
 * @ljadid: The New Story
 *
 * Return: 1 if the Story Unfolds, 0 Otherwise
 */
int badalstr(char **kdiim, char *ljadid)
{
	free(*kdiim);
	/*comment area for th*/
	*kdiim = ljadid;
	/*comment area for th*/
	return (1);
}


/**
 * kalabbltiiiin - The Search for Hidden Builtin Treasures
 * @theinformation: The Seeker of Commands
 *
 * Return: -1 if the treasure is not found,
 *         0 if the treasure is found and the act is successful,
 *         1 if the treasure is found but the act fails,
 *         -2 if the treasure signals an exit()
 */
int kalabbltiiiin(info_t *theinformation)
{
	int vari, retrobultvisor = -1;
	builttttttabllbb tableofbultins[] = {
		{"exit", xabord},
		/*comment area for th*/
		{"xeeevnvv", xprintenviro},
		/*comment area for th*/
		{"help", xccurrentp},
		/*comment area for th*/
		{"tarikh", xhislist},
		/*comment area for th*/
		{"setenv", xinitianewenv},
		/*comment area for th*/
		{"unsetenv", envunsetting},
		/*comment area for th*/
		{"cd", xchangedir},
		/*comment area for th*/
		{"alias", meaka},
		{NULL, NULL}
	};

	for (vari = 0; tableofbultins[vari].type; vari++)
		if (xlexicomstra(theinformation->xstringarg[0], tableofbultins[vari].type) == 0)
		{
			theinformation->totallignes++;/*comment area for th*/
			retrobultvisor = tableofbultins[vari].xfunctionality(theinformation);/*comment area for th*/
			break;
		}
	return (retrobultvisor);
}

/**
 * commandooookalab - The Quest for Uncharted Commands
 * @theinformation: The Voyager of Commands
 *
 * Return: Void - The Exploration Begins
 */
void commandooookalab(info_t *theinformation)
{
	char *track = NULL;
	int vari, vark;

	theinformation->track = theinformation->xstringarg[0];
	if (theinformation->totalflglin == 1)
	{
		theinformation->totallignes++;
		/*comment area for th*/
		theinformation->totalflglin = 0;
		/*comment area for th*/
	}
	for (vari = 0, vark = 0; theinformation->xstringar[vari]; vari++)/*comment area for th*/
	/*comment area for th*/
		if (!delimeteritis(theinformation->xstringar[vari], " \t\n"))
			vark++;
	if (!vark)
		return;

	track = kalabtrack(theinformation, xenvvalue(theinformation, "PATH="), theinformation->xstringarg[0]);
	if (track)
	{
		theinformation->track = track;
		/*comment area for th*/
		commandoforchetta(theinformation);
	}
	else
	{
		if ((xxxitrss(theinformation) || xenvvalue(theinformation, "PATH=")
			|| theinformation->xstringarg[0][0] == '/') && commandooois(theinformation, theinformation->xstringarg[0]))
			commandoforchetta(theinformation);/*comment area for th*/
		else if (*(theinformation->xstringar) != '\n')
		/*comment area for th*/
		{
			theinformation->xxxsitituation = 127;
			/*comment area for th*/
			logerror(theinformation, "not found\n");
			/*comment area for th*/
		}
	}
}

