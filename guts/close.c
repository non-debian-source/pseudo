/* 
 * static int
 * wrap_close(int fd) {
 *	int rc = -1;
 */
	/* this cleans up an internal table, and shouldn't even
	 * make it to the server.
	 */
	pseudo_client_op(OP_CLOSE, fd, -1, 0, 0);
	rc = real_close(fd);

/*	return rc;
 * }
 */
