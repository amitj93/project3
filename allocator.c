#define _GNU_SOURCE
# include <stdio.h>
# include <stdio.h>
#include <fcntl.h>
#include <sys/mman.h>
#include "allocator.h"

#define PAGESIZE 4096



#define PAGEMASK (unsigned long) ~0xFFF







struct PageArrayEntry {
	struct PageSmallHeader* page;
	unsigned int segment_type;
	}



struct PageSmallHeader {
	unsigned int segment_type;
	struct PageSmallHeader* prev;
	struct PageSmallHeader* next;
	unsigned int segment_count;
	unsigned int segment_max;
	};



/*
struct PageLargeHeader {
	struct PageLargeHeader* prev;
	struct PageLargeHeader* next;
	void* alloc_ptr;
	unsigned int size_object;
	unsigned int size_total;
	};

*/

void __attribute__ ((constructor)) init_allocator(void);
void __attribute__ ((destructor)) cleanup_allocator(void);

FILE* fd;

static int init_allocator()
{
fd = open("/dev/zero". 0_RDWR);
}


static int cleanup_allocator()
{
close(fd);
}


void *malloc(size_t *size)
{
int segment_type;
struct PageSmallHeader* page_small;
struct PageSmallHeader* page_small_start;


PageArrayEntry page_array[PAGEARRAYCOUNT];


segment_type = check_size(size);

if (segment_type != 0) {
	page_small = page_array[segment_type]->page;

	if (page_small == NULL) {

		page_small = get_page_small(segment_type);

		page_small->next = page_small;
		page_small->prev = page_small;
		}
	else {
		page_small_start = page_small;

		while (page_small->segment_count == page_small->segment_max) {

			page_small = page_small->next;
			if (page_small == page_small_start) {

				page_small = get_page_small();

				page_small->prev = page_small_start;
				page_small->next = page_small_start->next;
				page_small->next->prev = page_small;
				page_small_start->next = page_small;

				break;
				}
			}
		}

	pointer = page_small_malloc_segment(page_small);
	}


}








page_small_malloc_segment(struct PageSmallHeader* page)
{



}







void get_page_small(int type)
{

void* page = mmap( 	NULL,
					PAGESIZE,
					PROT_READ | PROT_WRITE,
					MAP_PRIVATE,
					fd, //-1
					0);

page->segment_type = segment_type;
page->segment_count = 0;
page->segment_max = //

return page;
}













void free(void* pointer)
	}




//If size is greater than 1024

else if(size > 1024)
{

struct PageSmallHeader* page_small;
struct PageArrayEntry* page_array_entry;



if (pointer == NULL)
	{
	 pagesmallheader 
	}

  else {
	while(rover->next)
	 {
	  rover = rover->next;
	 }	}


base = (void*)((unsigned long)pointer & PAGEMASK);

if (*((int*) base) != 0) {
	page_small = (struct PageSmallHeader*) base;

	page_small->segment_count--

	if (page_small->segment_count == 0) {
		page_array_entry = &page_array[page_small->segment_type];

		if (page_small = page_small->next) {
			page_array_entry->page = NULL;
			}
		else {
			page_small->prev->next = page_small->next;
			page_small->next->prev = page_small->prev;

			if (page_array_entry->page == page_small) {
				page_array_entry->page = page_small->next;
				}
			}

		page_destruct(page_small);
		}

	page_small_free_segment(void* page, struct PageSmallHeader* page_small);
	}

}



void page_destruct(void* page)
{
munmap( page, PAGESIZE);
return;
}





page_small_free_segment(void* page, struct PageSmallHeader* page_small)
{




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
struct PageSmallHeader *ptr = mmap(NULL,PAGESIZE, PROT_READ|PROT_WRITE,
MAP_PRIVATE,fd,0);

ptr->prev = prev;
ptr->next = prev;
ptr->blocksize = size;
ptr->num_blocks = 0; 

return pageptr;

}

page_t *PageLargeHeaderCreate(page_t *rover, size_t size){

int fd = -1;

struct PageLargeHeader *ptr = mmap(NULL,(size+32), PROT_READ|PROT_WRITE,
MAP_PRIVATE,fd,0);

ptr->prev = prev;
ptr->next = prev;
ptr->blocksize = size;
ptr->num_blocks = 0; 


return pageptr;

}
*/


