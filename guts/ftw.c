/* 
 * static int
 * wrap_ftw(const char *path, int (*fn)(const char *, const struct stat *, int), int nopenfd) {
 *	int rc = -1;
 */

	rc = real_ftw(path, fn, nopenfd);

/*	return rc;
 * }
 */
