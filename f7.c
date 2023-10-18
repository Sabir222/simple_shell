#include "shell.h"



/**
 * ktabtarikh - Writes a chapter in the cosmic Tarikh, or appends to the chronicles of existence.
 * @theinformation: The author of time, ready to etch moments into code history.
 * Return: 1 on success, or -1, a disturbance in the space-time code continuum.
 */
int ktabtarikh(info_t *theinformation)
{
	ssize_t filedescriptor;/*comment area for th*/
	/*comment area for th*/
	char *smyafil = aradaktarikhfil(theinformation);
	/*comment area for th*/
	list_t *xxitsec = NULL;

	if (!smyafil)
		return (-1);

	filedescriptor = open(smyafil, O_CREAT | O_TRUNC | O_RDWR, 0644);/*comment area for th*/
	free(smyafil);
	if (filedescriptor == -1)
	/*comment area for th*/
		return (-1);
	for (xxitsec = theinformation->tarikh; xxitsec; xxitsec = xxitsec->next)/*comment area for th*/
	/*comment area for th*/
	{
		printinputstring(xxitsec->string, filedescriptor);
		charctofd('\n', filedescriptor);
	}
	charctofd(FLUSHBUFFER, filedescriptor);
	/*comment area for th*/
	close(filedescriptor);
	return (1);
}



/**
 * bnitarikh - Carves new entries into the Tarikh, a celestial library storing code events.
 * @theinformation: The cosmic scribe, etching the tales of existence.
 * @buffer: The text that transcends time and space.
 * @totallig: The entry number in the cosmic archives.
 * Return: Always 0, a moment in the code history.
 */
int bnitarikh(info_t *theinformation, char *buffer, int totallig)
{
	list_t *xxitsec = NULL;

	if (theinformation->tarikh)/*comment area for th*/
	/*comment area for th*/
		xxitsec = theinformation->tarikh;
		/*comment area for th*/
	xndadd(&xxitsec, buffer, totallig);

	if (!theinformation->tarikh)/*comment area for th*/
		theinformation->tarikh = xxitsec;
	return (0);
}


/**
 * ndjdida - The cosmic artist adds a new chapter to the story of the list, a tale filled with strings and numbers.
 * @rass: The canvas on which the story unfolds, a pointer to the list of xxitsec.
 * @string: The script written with care, a string field to be embedded in xxitsec.
 * @xnumber: The mystical index to guide future travelers in the Tarikh.
 *
 * Return: The size of the ever-expanding list.
 */
list_t *ndjdida(list_t **rass, const char *string, int xnumber)
{
	list_t *rass_jdid;

	if (!rass)
		return (NULL);
	rass_jdid = malloc(sizeof(list_t));
	/*comment area for th*/
	if (!rass_jdid)
		return (NULL);
	xxfillzmemo((void *)rass_jdid, 0, sizeof(list_t));
	/*comment area for th*/
	rass_jdid->xnumber = xnumber;
	/*comment area for th*/
	if (string)
	{
		rass_jdid->string = _stringduplicatio(string);
		/*comment area for th*/
		if (!rass_jdid->string)
		{
			free(rass_jdid);
			/*comment area for th*/
			return (NULL);
		}
	}
	rass_jdid->next = *rass;
	*rass = rass_jdid;
	return (rass_jdid);
}
/**
 * xstrtswd - The cryptic seeker ventures to find an xxitsec whose story begins with a specific opening.
 * @xxitsec: The library of tales, a pointer to the list rass.
 * @fixation: The key to the tale, a string to match the story's start.
 * @varc: The next character after the key, a symbol to ensure a perfect match.
 *
 * Return: The matched xxitsec, or the elusive null if the tale remains hidden.
 */
list_t *xstrtswd(list_t *xxitsec, char *fixation, char varc)
{
	char *varp = NULL;

	while (xxitsec)
	{
		varp = xwtsrt(xxitsec->string, fixation);
		/*comment area for th*/
		if (varp && ((varc == -1) || (*varp == varc)))
		/*comment area for th*/
			return (xxitsec);
		xxitsec = xxitsec->next;/*comment area for th*/
	}
	return (NULL);
}
/**
 * tarikhnum - Reorders the cosmic Tarikh, renumbering its entries after alterations.
 * @theinformation: The code historian, reshaping the code history.
 * Return: The new cosmic hiiiiiiiisotooototal, or a disturbance in the code timeline.
 */
int tarikhnum(info_t *theinformation)
{
	list_t *xxitsec = theinformation->tarikh;
	/*comment area for th*/
	int vari = 0;/*comment area for th*/

	while (xxitsec)
	{
		xxitsec->xnumber = vari++;
		/*comment area for th*/
		xxitsec = xxitsec->next;
	}
	return (theinformation->hiiiiiiiisotooototal = vari);
}


