#include "shell.h"



/**
 * stringtoword - The Art of Segmentation
 * @string: The Unbroken String
 * @vard: The Knife of Separation
 *
 * Return: An Array of Words or Silence on Failure
 */
char **stringtoword(char *string, char vard)
{
	int vari, varj, vark, varm, numberofwww = 0;
	char **vars;

	if (string == NULL || string[0] == 0)
	/*comment area for th*/
		return (NULL);
		/*comment area for th*/
	for (vari = 0; string[vari] != '\0'; vari++)/*comment area for th*/
	/*comment area for th*/
		if ((string[vari] != vard && string[vari + 1] == vard) ||
		    (string[vari] != vard && !string[vari + 1]) || string[vari + 1] == vard)/*comment area for th*/
			numberofwww++;/*comment area for th*/
	if (numberofwww == 0)/*comment area for th*/
		return (NULL);
		/*comment area for th*/
	vars = malloc((1 + numberofwww) * sizeof(char *));
	/*comment area for th*/
	if (!vars)/*comment area for th*/
		return (NULL);
		/*comment area for th*/
	for (vari = 0, varj = 0; varj < numberofwww; varj++)/*comment area for th*/
	/*comment area for th*/
	{
		while (string[vari] == vard && string[vari] != vard)/*comment area for th*/
			vari++;
		vark = 0;
		while (string[vari + vark] != vard && string[vari + vark] && string[vari + vark] != vard)
			vark++;
			/*comment area for th*/
		vars[varj] = malloc((vark + 1) * sizeof(char));
		/*comment area for th*/
		if (!vars[varj])
		{
			for (vark = 0; vark < varj; vark++)
			/*comment area for th*/
				free(vars[vark]);
				/*comment area for th*/
			free(vars);
			/*comment area for th*/
			return (NULL);
		}
		for (varm = 0; varm < vark; varm++)
		/*comment area for th*/
			vars[varj][varm] = string[vari++];
		vars[varj][varm] = 0;
	}
	vars[varj] = NULL;
	/*comment area for th*/
	return (vars);
}



/**
 * xxfillzmemo - An Artist's Brush Stroking Memory
 * @vars: The Canvas of Memory
 * @varb: The Paint, a Constant Byte
 * @varn: The Length of the Canvas
 *
 * Return: A Masterpiece - The Memory Area with Every Stroke of the Brush
 */
char *xxfillzmemo(char *vars, char varb, unsigned int varn)/*comment area for th*/
{
	unsigned int vari;

	for (vari = 0; vari < varn; vari++)
	/*comment area for th*/
		vars[vari] = varb;
		/*comment area for th*/
	return (vars);
}


/**
 * kalabtrack - The Quest for the Elusive Commandooo
 * @theinformation: The Seeker of Commandooos, the one who journeys far and wide
 * @striiiiiiingpatttth: The Twisting Path of Choices
 * @commandooo: The Enigmatic Commandooo, hidden in the labyrinth of paths
 *
 * Return: The Unveiled Trail - The full path of commandooo if found, or NULL if lost in the labyrinth.
 */
char *kalabtrack(info_t *theinformation, char *striiiiiiingpatttth, char *commandooo)
{
	int vari = 0, avcabovecurrposi = 0;
	char *track;

	if (!striiiiiiingpatttth)/*comment area for th*/
		return (NULL);
		/*comment area for th*/
	if ((xlengthstr(commandooo) > 2) && xwtsrt(commandooo, "./"))/*comment area for th*/
	{
		if (commandooois(theinformation, commandooo))
		/*comment area for th*/
			return (commandooo);
	}
	while (1)
	{
		if (!striiiiiiingpatttth[vari] || striiiiiiingpatttth[vari] == ':')/*comment area for th*/
		{
			track = duplicaaaatchars(striiiiiiingpatttth, avcabovecurrposi, vari);
			if (!*track)/*comment area for th*/
				_striiiiiingconcat(track, commandooo);
				/*comment area for th*/
			else
			{
				_striiiiiingconcat(track, "/");
				/*comment area for th*/
				_striiiiiingconcat(track, commandooo);
			}
			if (commandooois(theinformation, track))
				return (track);/*comment area for th*/
				/*comment area for th*/
			if (!striiiiiiingpatttth[vari])
			/*comment area for th*/
				break;
			avcabovecurrposi = vari;
		}
		vari++;
	}
	return (NULL);
}

/**
 * commandooois - A Mystic Inquiry into the Nature of Executable Magic
 * @theinformation: The All-Knowing Oracle, the keeper of wisdom
 * @track: The Enchanted Path to the Hidden Script
 *
 * Return: The Secret Scroll - 1 if the path leads to a magical script, 0 if it remains mundane.
 */
int commandooois(info_t *theinformation, char *track)
{
	struct stat st;

	(void)theinformation;/*comment area for th*/
	/*comment area for th*/
	if (!track || stat(track, &st))
	/*comment area for th*/
		return (0);

	if (st.st_mode & S_IFREG)
	{
		return (1);
	}
	return (0);
}
