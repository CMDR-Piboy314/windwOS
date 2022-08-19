#include <stdio.h>

#if defined(__is_libk)
	#include <kernel/tty.h>
#endif

int putchar(int ic) {
#if defined(__is_libk)
	char c = (char)ic;

	term_write(&c, sizeof(c));
#else
	/* TODO: Implement stdio + a write system call */
#endif
	return ic;
}
