#define _GNU_SOURCE
# include <stdio.h>
# include <stdio.h>
#include <fcntl.h>
#include <sys/mman.h>
#include "allocator.h"

#define PAGESIZE 4096










struct PageArrayEntry {
	struct PageSmallHeader* page;
	unsigned int segment_type;
	}



struct PageSmallHeader {
	unsigned int segment_type;
	struct PageSmallHeader* prev;
	struct PageSmallHeader* next;
	//Segment* freesegment;
	unsigned int segment_count;
	unsigned int segment_max;
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

*/





void *malloc(size_t *size)
{
int segment_type;
struct PageSmallHeader* page_small;
struct PageSmallHeader* page_small_start;


PageArrayEntry page_array[PAGEARRAYCOUNT];


segment_type = check_size(size);

if (segment_type != 4096) {
	//segment_id = base2log(segment_type);
	page_small = page_array[segment_type];
	page_small_start = page_small;
	while (page_small is full) {
		page_small = page_small->next;
		if (page_small == page_small_start) {
			page_small = get_page_small();
			page_small->segment_type = segment_type;
			page_small_start->next = page_small;
			break;
			}
		}
	pointer = page_small_malloc(page_small);

	}


}








page_small_malloc(struct PageSmallHeader* page)
{



}







void get_page()
{

void* page = mmap( 	NULL,
					PAGESIZE,
					PROT_READ | PROT_WRITE,
					MAP_PRIVATE,
					fd,
					0);

return page;
}













void free(void* pointer)
{

struct PageSmallHeader* page_small;
#define PAGEMASK (unsigned long) ~0xFFF

if (pointer == NULL)
	{
	return;
	}



base = (void*)((unsigned long)pointer & PAGEMASK);

if (*((int*) base) < 4096) {
	page_small = (struct PageSmallHeader*) base;

	page_small->segment_count--

	if (page_small->segment_count == 0) {
		//free page
		}

	}

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


