#define _GNU_SOURCE
# include <stdio.h>
# include <stdio.h>
#include <fcntl.h>
#include <sys/mman.h>
#include "allocator.h"

#define PAGESIZE 4096










struct PageArrayEntry {
	struct PageSmallHeader* page;
	unsigned int object_type;
	}



struct PageSmallHeader {
	struct PageSmallHeader* prev;
	struct PageSmallHeader* next;
	//Segment* freesegment;
	unsigned int object_count;
	unsigned int object_max;
	};

struct PageLargeHeader {
	struct PageLargeHeader* prev;
	struct PageLargeHeader* next;
	void* alloc_ptr;
	unsigned int size_object;
	unsigned int size_total;
	};




/*
void __attribute__ ((constructor)) init(void);
void __attribute__ ((destructor)) cleanup(void);

static int init_allocator() {
 fd = open("/dev/zero". 0_RDWR);

for(i = 0; i< 255; i++)
   {
    page_t *startaddr[i] = NULL;
    void *startaddr[i] = NULL;
   }	}

*/





void *malloc(size_t *size)
{
int segment_selection_size;

PageArrayEntry page_array[PAGEARRAYCOUNT];


segment_selection_size = check_size(size);
if (segment_selection_size != 0) {
	page_small = page_array[segment_selection_size];




	}


}









if(startaddr[i] == NULL) {

page_t * new = create_new_page(NULL, );
if ( size < 1024)
   {
     for(i= 0; i<(PAGESIZE-16); i++)
	{
    	 
	}
   }



	}

else{
     mmap(NULL, PAGESIZE, PROT_READ | PROT_WRITE, MAP_PRIVATE, fd, 0);

 
	}







}

int check_size(int size)
{

if(size <= 2) {
	size = 2;
	}
else if (size > 2 && size <=4) {
	size = 4;
	}
else if (size > 4 && size <=8) {
	size = 8;
	}
else if (size > 8 && size <=16) {
	size = 16;
	}
else if (size > 16 && size <=32) {
	size = 32;
	}
else if (size > 32 && size <=64) {
	size = 64;
	}
else if (size > 64 && size <=128) {
	size = 128;
	}
else if (size > 128 && size <=256) {
	size = 256;
	}
else if (size > 256 && size <=512) {
	size = 512;
	}
else if (size > 512 && size <=1024) {
	size = 1024;
	}
else {
	size = 0;
	}

return size;
}

}

void* my_calloc (size_t num, size_t size)
{

}



void free (void* ptr) {
/*
int check_size(int size)
{

if(size <= 2) {
	size = 2;
	}
else if (size > 2 && size <=4) {
	size = 4;
	}
else if (size > 4 && size <=8) {
	size = 8;
	}
else if (size > 8 && size <=16) {
	size = 16;
	}
else if (size > 16 && size <=32) {
	size = 32;
	}
else if (size > 32 && size <=64) {
	size = 64;
	}
else if (size > 64 && size <=128) {
	size = 128;
	}
else if (size > 128 && size <=256) {
	size = 256;
	}
else if (size > 256 && size <=512) {
	size = 512;
	}
else if (size > 512 && size <=1024) {
	size = 1024;
	}
else {
	size = 0;
	}

return size;
}


void* realloc (void* ptr, size_t size) {

}


page_t *create_new_page(page_t *prev, size_t size) {

int fd = -1;

struct page_small_header *ptr = mmap(NULL,PAGESIZE, PROT_READ|PROT_WRITE,
MAP_PRIVATE,fd,0);

ptr->prev = prev;
ptr->next = prev;
ptr->blocksize = blocksize;
ptr->num_blocks = 0; 


return pageptr;

}
*/


