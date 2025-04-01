#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

#define BUF_SIZE 512

char buf[BUF_SIZE];

int main()
{
    int fd = open("README",2);
    uint8 key = 15;

    //encrypt(fd,key);
    int retval = encrypt(fd, key);
    printf("encrypt returned %d\n", retval);    
    
    return 0;
}
