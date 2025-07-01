#include <stdio.h>
#include <stdlib.h>

void *_reshape(void *ptr, size_t old_size, size_t new_size)
{
    if (ptr == NULL)
    {
        return malloc(new_size);
    }
    if (new_size == 0)
    {
        free(ptr);
        return NULL;
    }
    void *new_ptr = malloc(new_size);
    if (new_ptr == NULL)
    {
        return NULL;
    }
    int min_size = old_size;
    if (old_size > new_size)
    {
        min_size = new_size;
    }
    memcpy(new_ptr, ptr, min_size);
    free(ptr);
    return new_ptr;
}
