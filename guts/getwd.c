/* 
 * static char *
 * wrap_getwd(char *buf) {
 *	char * rc = NULL;
 */

	pseudo_debug(3, "getwd (getcwd)\n");
	rc = wrap_getcwd(buf, pseudo_path_max());
	/* because it would violate everything we have ever known about
	 * UNIX for these functions to have the same errno semantics,
	 * that's why.
	 */
	if (rc == NULL && errno == ERANGE	)
		errno = ENAMETOOLONG;

/*	return rc;
 * }
 */
