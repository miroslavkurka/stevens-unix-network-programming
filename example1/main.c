#include <stdlib.h>
#include <stdio.h>

/* prints ENV variables to standard output

(char *)0 produces a null-pointer value of type char * it does not point to address at "0"
the conditional check is needed since envp is not constant and it always ends with NULL pointer (char) at the end.

*/

int main(int argc, char *argv[], char *envp[])
{
    for (int i = 0; envp[i] != (char *)0; i++)
    {
        printf("%s\n", envp[i]);
    }
    exit(0);
}
