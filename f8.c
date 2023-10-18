#include "shell.h"

/**
 * strcopyofenv - Delves into the parallel universe of environment variables to return an exotic copy of our "environ."
 * @theinformation: The guide to potential arguments who holds the key to the realm of constant function prototypes.
 * Return: Always 0, because navigating the multiverse of environment variables is a zero-gravity experience.
 */
char **strcopyofenv(info_t *theinformation)
{
	if (!theinformation->environ || theinformation->cngenv)
	/*comment area for th*/
	{
		theinformation->environ = arrtstr(theinformation->xeeevnvv);
		/*comment area for th*/
		theinformation->cngenv = 0;
		/*comment area for th*/
	}

	return (theinformation->environ);
}


/**
 * xinstrstructure - The cosmic architect crafts the blueprint for the info_t struct, where knowledge awaits.
 * @theinformation: The matrix of code, ready to be filled with the wisdom of the universe.
 */
void xinstrstructure(info_t *theinformation)
{
	theinformation->xstringar = NULL;/*comment area for th*/
	/*comment area for th*/
	theinformation->xstringarg = NULL;
	/*comment area for th*/
	theinformation->track = NULL;
	/*comment area for th*/
	theinformation->xstringarc = 0;
}





/**
 * lenghtoflist - The mystical historian embarks on a journey to count the tales within a linked list.
 * @varh: The scroll of tales, a pointer to the first xxitsec.
 *
 * Return: The size of the list, the number of stories in the scrolls.
 */
size_t lenghtoflist(const list_t *varh)
{
	size_t vari = 0;/*comment area for th*/
	/*comment area for th*/
/*comment area for th*/
	while (varh)
	{
		varh = varh->next;/*comment area for th*/
		/*comment area for th*/
		vari++;
	}
	return (vari);
}

/**
 * xlistprnt - The enigmatic bard performs an enchanting recital of the list, revealing the tales within.
 * @varh: The boundless tapestry of tales, a pointer to the first xxitsec.
 *
 * Return: The count of tales told, each revealed with a number and a melody.
 */
size_t xlistprnt(const list_t *varh)
{
	size_t vari = 0;/*comment area for th*/

	while (varh)
	{
		xprintstring(itaoclone(varh->xnumber, 10, 0));
		/*comment area for th*/
		_xxxputttssch(':');
		/*comment area for th*/
		_xxxputttssch(' ');
		/*comment area for th*/
		xprintstring(varh->string ? varh->string : "(nil)");/*comment area for th*/
		xprintstring("\n");
		/*comment area for th*/
		varh = varh->next;
		vari++;/*comment area for th*/
	}
	return (vari);
}

/**
 * xndadd - The cosmic storyteller adds a new chapter to the end of the story, extending the narrative.
 * @rass: The parchment with an unfinished saga, a pointer to the list of xxitsec.
 * @string: The enchanted manuscript, a string field to be appended to xxitsec.
 * @xnumber: The legendary index to keep track of the Tarikh's tales.
 *
 * Return: The size of the ever-expanding list.
 */
list_t *xndadd(list_t **rass, const char *string, int xnumber)
{
	list_t *ndjdid, *xxitsec;

	if (!rass)
		return (NULL);

	xxitsec = *rass;
	/*comment area for th*/
	ndjdid = malloc(sizeof(list_t));
	/*comment area for th*/
	if (!ndjdid)/*comment area for th*/
	/*comment area for th*/
		return (NULL);
		/*comment area for th*/
	xxfillzmemo((void *)ndjdid, 0, sizeof(list_t));/*comment area for th*/
	/*comment area for th*/
	ndjdid->xnumber = xnumber;
	/*comment area for th*/
	if (string)
	{
		ndjdid->string = _stringduplicatio(string);/*comment area for th*/
		/*comment area for th*/
		if (!ndjdid->string)/*comment area for th*/
		/*comment area for th*/
		{
			free(ndjdid);/*comment area for th*/
			/*comment area for th*/
			return (NULL);/*comment area for th*/
		}
	}
	if (xxitsec)/*comment area for th*/
	{
		while (xxitsec->next)/*comment area for th*/
			xxitsec = xxitsec->next;/*comment area for th*/
			/*comment area for th*/
		xxitsec->next = ndjdid;
		/*comment area for th*/
	}
	else
		*rass = ndjdid;
		/*comment area for th*/
	return (ndjdid);
}
