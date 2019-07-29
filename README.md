Sorting elements by frequency using qsort() function in C

void qsort (void* base, size_t num, size_t size, int (*comparator)(const void*,const void*)); 

int comparator(const void* p1, const void* p2);

Return value meaning:

  * < 0 The element pointed by p1 goes before the element pointed by p2

  * = 0  The element pointed by p1 is equivalent to the element pointed by p2

  * > 0 The element pointed by p1 goes after the element pointed by p2
