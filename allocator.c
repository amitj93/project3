#define _GNU_SOURCE
# include <stdio.h>
# include <stdio.h>
#include <fcntl.h>
#include <sys/mman.h>
#include "allocator.h"

#define PAGESIZE 4096

void __attribute__ ((constructor)) init(void);
void __attribute__ ((destructor)) cleanup(void);

static int init_allocator()
{
 fd = open("/dev/zero". 0_RDWR);

for(i = 0; i< 9; i++)
   {
    void *startaddr[i] = NULL;

   }
}

void *malloc(size_t *size)
{

if(size <= 2)
{
size = 2;

}
else if(size > 2 && size <=4)
{
size = 4;

}
else if(size > 4 && size <=8)
{
size = 8;
}
else if(size > 8 && size <=16)
{
 size = 16;
}
else if(size > 16 && size <=32)
{
 size = 32;
}

else if(size > 32 && size <=64)
{
 size = 64;
}

else if(size > 64 && size <=128)
{
 size = 128;
}

else if(size > 128 && size <=256)
{
 size = 256;
}

else if(size > 256 && size <=512)
{
 size = 512;
}

else if(size > 512 && size <=1024)
{
 size = 1024;
}

else if (size >= 1024)
{

}

if(startaddr[i] == NULL)
{

void * start  = mmap ( NULL , PAGESIZE , PROT_READ | PROT_WRITE , MAP_PRIVATE , fd , 0);


}







}


