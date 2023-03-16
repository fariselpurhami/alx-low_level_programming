```c
#include <unistd.h>

int main(void)
	const char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	const int len = sizeof(msg) - 1; // exclude null terminator
	write(2, msg, len); // write to stderr (file descriptor 2)
	return 1;
}
```
