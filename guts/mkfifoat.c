/* 
 * static int
 * wrap_mkfifoat(int dirfd, const char *path, mode_t mode) {
 *	int rc = -1;
 */

	rc = wrap___xmknodat(_STAT_VER, dirfd, path, (mode & 07777) | S_IFIFO, 0);

/*	return rc;
 * }
 */
