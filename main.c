#include <stdio.h>
#include <sys/stat.h>
#include <time.h>
#define F "./main"

int main(void)
{
    struct stat md;
    puts("File: "F);
    stat(F, &md);
    printf("size: %ld\n", md.st_size);
    printf("mode: %o\n", md.st_mode);
    printf("last accessed: %s\n", ctime(&md.st_atime));

    return 0;
}
