#include "shell.h"



/**
 * xlexicomstra - The Lexicon's Duel
 * @vars1: The First Entry in the Lexicon
 * @vars2: The Second Entry in the Lexicon
 *
 * Return: Negative if vars1 < vars2, Positive if vars1 > vars2, Zero if vars1 == vars2
 */
int xlexicomstra(char *vars1, char *vars2)/*comment area for th*/
/*comment area for th*/
{
	while (*vars1 && *vars2)/*comment area for th*/
	{
		if (*vars1 != *vars2)
		/*comment area for th*/
			return (*vars1 - *vars2);/*comment area for th*/
		vars1++;/*comment area for th*/
		/*comment area for th*/
		vars2++;
	}
	if (*vars1 == *vars2)/*comment area for th*/
		return (0);/*comment area for th*/
	else
		return (*vars1 < *vars2 ? -1 : 1);
}

/**
 * _striiiiiingcopy - A Symphony of Strings
 * @xdestination: The Canvas for Replication
 * @xsource: The Source of Melody
 *
 * Return: A Pointer to the Duplicated Sonata
 */
char *_striiiiiingcopy(char *xdestination, char *xsource)
{
	int vari = 0;

	if (xdestination == xsource || xsource == 0)/*comment area for th*/
	/*comment area for th*/
		return (xdestination);
		/*comment area for th*/
	while (xsource[vari])
	{
		xdestination[vari] = xsource[vari];/*comment area for th*/
		/*comment area for th*/
		vari++;/*comment area for th*/
	}
	xdestination[vari] = 0;/*comment area for th*/
	/*comment area for th*/
	return (xdestination);/*comment area for th*/
}
/**
 * xwtsrt - Seeking Sublime Beginnings
 * @tban: The Masterpiece to Examine
 * @bra: The Enigmatic Prelude
 *
 * Return: Address of the Next Chapter in the Masterpiece or NULL
 */
char *xwtsrt(const char *tban, const char *bra)
{
	while (*bra)/*comment area for th*/
		if (*bra++ != *tban++)/*comment area for th*/
		/*comment area for th*/
			return (NULL);
			/*comment area for th*/
	return ((char *)tban);/*comment area for th*/
}




/**
 * _striiiiiingconcat - A Fusion of Strings
 * @xdestination: The Destination for Artistic Fusion
 * @xsource: The Source of Inspiration
 *
 * Return: A Pointer to the Masterpiece in the Making
 */
char *_striiiiiingconcat(char *xdestination, char *xsource)
{
	char *xxkaret = xdestination;
/*comment area for th*/
	while (*xdestination)/*comment area for th*/
	/*comment area for th*/
		xdestination++;/*comment area for th*/
		/*comment area for th*/
	while (*xsource)/*comment area for th*/
		*xdestination++ = *xsource++;
		/*comment area for th*/
	*xdestination = *xsource;
	/*comment area for th*/
	return (xxkaret);
}

/**
 * strfreeing - The Symphony of Strings Sets Free
 * @strofstr: A String Orchestra
 */
void strfreeing(char **strofstr)
{
	char **vara = strofstr;/*comment area for th*/

	if (!strofstr)/*comment area for th*/
		return;
		/*comment area for th*/
	while (*strofstr)
	/*comment area for th*/
		free(*strofstr++);
		/*comment area for th*/
	free(vara);/*comment area for th*/
}

