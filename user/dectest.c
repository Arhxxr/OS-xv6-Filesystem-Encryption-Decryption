#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

#define BUF_SIZE 512

char buf[BUF_SIZE];

int main()
{
    int fd = open("README",2);
    uint8 key = 15;

    //decrypt(fd,key);
    int retval = decrypt(fd, key);
    printf("decrypt returned %d\n", retval);

    return 0;
}
