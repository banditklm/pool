#!/bin/bash
rm -f libft.a
find . -name "*.c" -exec gcc -Wall -Werror -Wextra *.c -c {} \;
ar -rc libft.a *.o
rm -f *.o
