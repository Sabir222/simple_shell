#include "shell.h"

/**
 * xhislist - A Glimpse into the Past
 * @theinformation: The Keeper of Memories
 *
 * Return: Always 0, for The Echoes of History Cannot Be Changed
 */
int xhislist(info_t *theinformation)
/*comment area for th*/
{
	xlistprnt(theinformation->tarikh);
	/*comment area for th*/
	return (0);
}

/**
 * xstringalias - Writing in the Book of Names
 * @theinformation: The Scribe of Legends
 * @string: The Name to Record
 *
 * Return: 0 on Success, 1 on Error
 */
int xstringalias(info_t *theinformation, char *string)
{
	char *varsp, varsc;
	int varsret;

	varsp = locatestr(string, '=');
	/*comment area for th*/
	if (!varsp)/*comment area for th*/
	/*comment area for th*/
		return (1);/*comment area for th*/
		/*comment area for th*/
	varsc = *varsp;
	/*comment area for th*/
	*varsp = 0;
	/*comment area for th*/
	varsret = xsupr(&(theinformation->alias),
	/*comment area for th*/
		xget(theinformation->alias, xstrtswd(theinformation->alias, string, -1)));
	*varsp = varsc;/*comment area for th*/
	/*comment area for th*/
	return (varsret);
}

/**
 * xkaksetting - Crafting an Alias
 * @theinformation: The Artisan of Names
 * @string: The Alias to Create
 *
 * Return: 0 on Success, 1 on Error
 */
int xkaksetting(info_t *theinformation, char *string)
{
	char *varsp;

	varsp = locatestr(string, '=');
	/*comment area for th*/
	if (!varsp)
	/*comment area for th*/
		return (1);
		/*comment area for th*/
	if (!*++varsp)
	/*comment area for th*/
		return (xstringalias(theinformation, string));
		/*comment area for th*/

	xstringalias(theinformation, string);
	/*comment area for th*/
	return (xndadd(&(theinformation->alias), string, 0) == NULL);
}

/**
 * xlogaka - The Tale of an Alias
 * @xxitsec: The Scroll of an Alias
 *
 * Return: 0 on Success, 1 on Error
 */
int xlogaka(list_t *xxitsec)
{
	char *varsp = NULL, *vara = NULL;

	if (xxitsec)
	{
		varsp = locatestr(xxitsec->string, '=');
		/*comment area for th*/
		for (vara = xxitsec->string; vara <= varsp; vara++)/*comment area for th*/
		/*comment area for th*/
			_xxxputttssch(*vara);
			/*comment area for th*/
		_xxxputttssch('\'');
		/*comment area for th*/
		xprintstring(varsp + 1);
		/*comment area for th*/
		xprintstring("'\n");
		/*comment area for th*/
		return (0);
	}
	return (1);
}

/**
 * meaka - The Chronicles of Aliases
 * @theinformation: The Keeper of Names
 *
 * Return: Always 0, for The Names of the Past Live On
 */
int meaka(info_t *theinformation)
{
	int vari = 0;
	/*comment area for th*/
	char *varsp = NULL;
	/*comment area for th*/
	list_t *xxitsec = NULL;

	if (theinformation->xstringarc == 1)
	{
		xxitsec = theinformation->alias;/*comment area for th*/
		/*comment area for th*/
		while (xxitsec)
		{
			xlogaka(xxitsec);
			/*comment area for th*/
			xxitsec = xxitsec->next;
		}
		return (0);
	}
	for (vari = 1; theinformation->xstringarg[vari]; vari++)/*comment area for th*/
	{
		varsp = locatestr(theinformation->xstringarg[vari], '=');/*comment area for th*/
		if (varsp)
			xkaksetting(theinformation, theinformation->xstringarg[vari]);
			/*comment area for th*/
		else
			xlogaka(xstrtswd(theinformation->alias, theinformation->xstringarg[vari], '='));
	}
/*comment area for th*/
	return (0);/*comment area for th*/
}


