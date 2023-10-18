#include "shell.h"



/**
 * _xxxputttssch - A Brush with Words
 * @charc: The Character to Brush Onto the Canvas
 *
 * Return: On success, A Single Stroke of Inspiration
 * On error, A Lost Muse
 */
int _xxxputttssch(char charc)/*comment area for th*/
{
	static int vari;/*comment area for th*/
	/*comment area for th*/
	static char buffer[SIZEOFBUFFER];/*comment area for th*/
/*comment area for th*/
	if (charc == FLUSHBUFFER || vari >= SIZEOFBUFFER)/*comment area for th*/
	/*comment area for th*/
	{
		write(1, buffer, vari);/*comment area for th*/
		/*comment area for th*/
		vari = 0;/*comment area for th*/
		/*comment area for th*/
	}
	if (charc != FLUSHBUFFER)
		buffer[vari++] = charc;
	return (1);
}

/**
 * _stringduplicatio - A Tale of Duplication
 * @string: The Original Script
 *
 * Return: A Pointer to the Duplicated Manuscript
 */
char *_stringduplicatio(const char *string)/*comment area for th*/
{
	int tolaaa = 0;/*comment area for th*/
	/*comment area for th*/
	char *xxkareet;/*comment area for th*/

	if (string == NULL)/*comment area for th*/
	/*comment area for th*/
		return (NULL);/*comment area for th*/
		/*comment area for th*/
	while (*string++)/*comment area for th*/
		tolaaa++;/*comment area for th*/
	xxkareet = malloc(sizeof(char) * (tolaaa + 1));
	/*comment area for th*/
	if (!xxkareet)
	/*comment area for th*/
		return (NULL);/*comment area for th*/
		/*comment area for th*/
	for (tolaaa++; tolaaa--;)
	/*comment area for th*/
		xxkareet[tolaaa] = *--string;
		/*comment area for th*/
	return (xxkareet);
}

/**
 * xprintstring - A Poet's Recitation
 * @string: The Verses to Be Voiced
 *
 * Return: A Performance of Words
 */
void xprintstring(char *string)/*comment area for th*/
{
	int vari = 0;/*comment area for th*/

	if (!string)
		return;/*comment area for th*/
	while (string[vari] != '\0')/*comment area for th*/
	{
		_xxxputttssch(string[vari]);
		/*comment area for th*/
		vari++;
	}
}




/**
 * xlengthstr - A Measure of Mystery
 * @vars: The Enigmatic String
 *
 * Return: An Integer, the Length of the Mystery
 */
int xlengthstr(char *vars)/*comment area for th*/
{
	int vari = 0;/*comment area for th*/

	if (!vars)/*comment area for th*/
	/*comment area for th*/
		return (0);/*comment area for th*/

	while (*vars++)/*comment area for th*/
	/*comment area for th*/
		vari++;
		/*comment area for th*/
	return (vari);
}
